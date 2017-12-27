#include "crtsn.h"

template<typename T>
T treap<T>::findMin() {
	T res = _findMin(root)->key;
	std::cout << "MIN: " << res << std::endl;
	return res;
}

template<typename T>
T treap<T>::findMax() {
	T res = _findMax(root)->key;
	std::cout << "MAX: " << res << std::endl;
	return res;
}

template<typename T>
treap_node<T> * treap<T>::_findMin(treap_node<T> * node)
{
	return node->left ? _findMin(node->left) : node;
}

template<typename T>
treap_node<T> * treap<T>::_findMax(treap_node<T> * node)
{
	return node->right ? _findMax(node->right) : node;
}



// ------- debug code
/*#include <cassert>
#include <cstdio>
template<typename T> void assert_ok(treap_node<T>* v) {
if (!v) return;
assert_ok(v->left);
assert_ok(v->right);
if (v->left)
assert(v->left->key < v->key),
assert(v->left->priority < v->priority);
if (v->right)
assert(v->key < v->right->key),
assert(v->right->priority < v->priority);
assert(v->size == (v->left ? v->left->size : 0) + (v->right ? v->right->size : 0) + 1);
}
*/
template<typename T> void print(treap_node<T>* v, int indent = 0) {}
template<> void print<int>(treap_node<int>* v, int indent) {


	if (!v) return;
	for (int i = indent; i; i--) printf(" ");
	std::string s = std::to_string(v->priority);//short form priority
	std::cout << v->key   /*<< ", " << s[0] << s[1] << s[2]*/ << std::endl;
	if (!v->left && !v->right) {
		indent += 11;
	}
	if (v->left && v->right) {
		print(v->left, indent - 4);
		print(v->right, indent + 4);
	}
	else {
		print(v->left, indent - 3);
		print(v->right, indent + 3);
	}
}

// ------- debug code



template<typename T> typename treap<T>::node_pair treap<T>::treap_split(node v, const T& key, bool less_equal) {
	if (!v) return node_pair(0, 0);
	//TODO: rewrite to templates
	bool cmp_result = less_equal ? (!(key < v->key)) : (v->key < key);
	if (cmp_result) {
		node_pair p = treap_split(v->right, key, less_equal);
		v->right = p.first;
		v->update_size();
		p.first = v;
		return p;
	}
	else {
		node_pair p = treap_split(v->left, key, less_equal);
		v->left = p.second;
		v->update_size();
		p.second = v;
		return p;
	}
}

template<typename T> typename treap<T>::node treap<T>::treap_merge(node left, node right) {
	if (!left) return right;
	if (!right) return left;
	if (left->priority > right->priority) {
		left->right = treap_merge(left->right, right);
		left->update_size();
		return left;
	}
	else {
		right->left = treap_merge(left, right->left);
		right->update_size();
		return right;
	}
}

template<typename T> bool treap<T>::insert(const T& x) {
	if (!root) {
		root = new treap_node<T>(x);
		return true;
	}
	int priority = rand() ^ (rand() << 15);

	static treap_node<T>* tmp[TMP_ARRAY_SIZE];
	int tmpn = 0;

	node v = root;
	while (v && v->priority > priority) {
		tmp[tmpn++] = v;
		if (v->key < x) {
			v = v->right;
		}
		else if (x < v->key) {
			v = v->left;
		}
		else {
			return false;
		}
	}

	node tv = v;
	while (tv) {
		if (tv->key < x) {
			tv = tv->right;
		}
		else if (x < tv->key) {
			tv = tv->left;
		}
		else {
			return false;
		}
	}

	node nv = new treap_node<T>(x);
	nv->priority = priority;

	if (v) {
		node_pair p = treap_split(v, x);
		nv->left = p.first;
		nv->right = p.second;
		nv->update_size();
	}

	if (tmpn) {
		node pv = tmp[tmpn - 1];
		if (pv->key < x) {
			pv->right = nv;
		}
		else {
			pv->left = nv;
		}
	}
	else {
		root = nv;
	}

	for (int i = tmpn - 1; i >= 0; i--) {
		tmp[i]->update_size();
	}

	return true;
}

template<typename T> bool treap<T>::insert(const T& x, const T& va) {
	if (!root) {
		root = new treap_node<T>(x, va);
		return true;
	}
	int priority = rand() ^ (rand() << 15);

	static treap_node<T>* tmp[TMP_ARRAY_SIZE];
	int tmpn = 0;

	node v = root;
	while (v && v->priority > priority) {
		tmp[tmpn++] = v;
		if (v->key < x) {
			v = v->right;
		}
		else if (x < v->key) {
			v = v->left;
		}
		else {
			return false;
		}
	}

	node tv = v;
	while (tv) {
		if (tv->key < x) {
			tv = tv->right;
		}
		else if (x < tv->key) {
			tv = tv->left;
		}
		else {
			return false;
		}
	}

	node nv = new treap_node<T>(x, va);
	nv->priority = priority;

	if (v) {
		node_pair p = treap_split(v, x);
		nv->left = p.first;
		nv->right = p.second;
		nv->update_size();
	}

	if (tmpn) {
		node pv = tmp[tmpn - 1];
		if (pv->key < x) {
			pv->right = nv;
		}
		else {
			pv->left = nv;
		}
	}
	else {
		root = nv;
	}

	for (int i = tmpn - 1; i >= 0; i--) {
		tmp[i]->update_size();
	}

	return true;
}

template<typename T> bool treap<T>::erase(const T& x) {
	if (!root) return false;

	static treap_node<T>* tmp[TMP_ARRAY_SIZE];
	int tmpn = 0;

	node v = root;
	while (v) {
		tmp[tmpn++] = v;
		if (v->key < x) {
			v = v->right;
		}
		else if (x < v->key) {
			v = v->left;
		}
		else {
			break;
		}
	}
	if (!v) return false;

	node nv = treap_merge(v->left, v->right);

	tmpn--;
	//TODO: repeating code (treap<T>::insert)
	if (tmpn) {
		node pv = tmp[tmpn - 1];
		if (pv->key < x) {
			pv->right = nv;
		}
		else {
			pv->left = nv;
		}
	}
	else {
		root = nv;
	}

	for (int i = tmpn - 1; i >= 0; i--) {
		tmp[i]->update_size();
	}

	return true;
}

template<typename T> bool treap<T>::contains(const T& x) const {
	node v = root;
	while (v) {
		if (v->key < x) {
			v = v->right;
		}
		else if (x < v->key) {
			v = v->left;
		}
		else {
			return true;
		}
	}
	return false;
}

template<typename T> inline int treap<T>::size() const {
	return root ? root->size : 0;
}

template<typename T> inline bool treap<T>::empty() const {
	return size() == 0;
}