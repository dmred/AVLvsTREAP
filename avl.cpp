#include "avl.h"

template<typename T>
AVL_tree<T>::AVL_tree() : root{ nullptr } {};

template<typename T>
AVL_tree<T>::~AVL_tree()
{
	_deleteNode(root);
}

template<typename T>
void AVL_tree<T>::_deleteNode(Node<T> * node)
{
	if (node == nullptr) return;
	_deleteNode(node->left);
	_deleteNode(node->right);
	delete node;
}

template<typename T>
unsigned int AVL_tree<T>::_height(Node<T> * node)
{
	if (node)
		return node->height;
	return 0;
}

template<typename T>
int AVL_tree<T>::_balanceFactor(Node<T> * node)
{
	return _height(node->right) - _height(node->left);
}

template<typename T>
void AVL_tree<T>::_fixHeight(Node<T> * node)
{
	unsigned int h_l = _height(node->left);
	unsigned int h_r = _height(node->right);
	node->height = (h_l > h_r ? h_l : h_r) + 1;
}

template<typename T>
Node<T> * AVL_tree<T>::_rotateLeft(Node<T> * node)
{
	Node<T> * r = node->right;
	if (node == root)
		root = r;
	node->right = r->left;
	if (r->left)
		r->left->parent = node;
	r->parent = node->parent;
	if (node->parent == nullptr)
		root = r;
	else if (node == node->parent->left)
		node->parent->left = r;
	else node->parent->right = r;
	r->left = node;
	node->parent = r;

	_fixHeight(node);
	_fixHeight(r);
	return r;
}
template<typename T>
Node<T> * AVL_tree<T>::_rotateRight(Node<T> * node)
{
	Node<T> * l = node->left;
	if (node == root)
		root = l;
	node->left = l->right;
	if (l->right)
		l->right->parent = node;
	l->parent = node->parent;
	if (node->parent == nullptr)
		root = l;
	else if (node == node->parent->right)
		node->parent->right = l;
	else node->parent->left = l;
	l->right = node;
	node->parent = l;

	_fixHeight(node);
	_fixHeight(l);
	return l;
}

template<typename T>
Node<T> *  AVL_tree<T>::_balance(Node<T> * node)
{
	_fixHeight(node);
	if (_balanceFactor(node) == 2)
	{
		if (_balanceFactor(node->right) < 0)
			node->right = _rotateRight(node->right);
		return _rotateLeft(node);
	}
	if (_balanceFactor(node) == -2)
	{
		if (_balanceFactor(node->left) > 0)
			node->left = _rotateLeft(node->left);
		return _rotateRight(node);
	}
}

template<typename T>
void AVL_tree<T>::insert(const T& _key)
{
	_insert(root, _key);
}

template<typename T>
void AVL_tree<T>::insert(const T& _key, const T& _val)
{
	_insert(root, _key, _val);
}


template<typename T>
void AVL_tree<T>::_insert(Node<T> * & node, const T& _key)
{
	Node<T> * parent = nullptr;
	Node<T> * cur = node;
	while (cur)
	{
		parent = cur;
		if (_key == cur->key) {}
			//std::cout<<("Repeating element\n");
		if (_key < cur->key)
			cur = cur->left;
		else //if (value > node->value)
			cur = cur->right;
	}
	cur = new Node<T>(_key, parent);
	if (cur->parent == nullptr)
		root = cur;
	else
	{
		if (_key < parent->key)
			parent->left = cur;
		else parent->right = cur;
	}
	while (cur && cur->parent)
	{
		_balance(cur->parent);
		cur = cur->parent;
	}
}

template<typename T>
void AVL_tree<T>::_insert(Node<T> * & node, const T& _key, const T& _val)
{
	Node<T> * parent = nullptr;
	Node<T> * cur = node;
	while (cur)
	{
		parent = cur;
		if (_key == cur->key) {}
		//std::cout<<("Repeating element\n");
		if (_key < cur->key)
			cur = cur->left;
		else //if (value > node->value)
			cur = cur->right;
	}
	cur = new Node<T>(_key,_val, parent);
	if (cur->parent == nullptr)
		root = cur;
	else
	{
		if (_key < parent->key)
			parent->left = cur;
		else parent->right = cur;
	}
	while (cur && cur->parent)
	{
		_balance(cur->parent);
		cur = cur->parent;
	}
}

template<typename T>
T AVL_tree<T>::findMin() {
	T res = _findMin(root)->key;
	std::cout << "MIN: " << res << std::endl;
	return res;
}

template<typename T>
T AVL_tree<T>::findMax() {
	T res = _findMax(root)->key;
	std::cout << "MAX: " << res << std::endl;
	return res;
}

template<typename T>
Node<T> * AVL_tree<T>::_findMin(Node<T> * node)
{
	return node->left ? _findMin(node->left) : node;
}

template<typename T>
Node<T> * AVL_tree<T>::_findMax(Node<T> * node)
{
	return node->right ? _findMax(node->right) : node;
}

template<typename T>
void AVL_tree<T>::remove(const T& value)
{
	_remove(root, value);
}
template<typename T>
void AVL_tree<T>::_remove(Node<T>* & node, const T& value)
{
	if (node)
	{
		if (value < node->key)
			_remove(node->left, value);
		else if (value > node->key)
			_remove(node->right, value);
		else if (value == node->key)
		{
			Node<T> * cur_p = node->parent;
			if (!node->left && !node->right)
			{

				if (node->parent->left == node)
				{
					node->parent->left = nullptr;
					//node->parent->height = 1;
					do
					{
						_balance(cur_p);
						cur_p = cur_p->parent;
					} while (cur_p);
				}
				else
				{
					node->parent->right = nullptr;
					//node->parent->height = 1;
					do
					{
						_balance(cur_p);
						cur_p = cur_p->parent;
					} while (cur_p);
				}
			}

			else if (node->left && !node->right)
			{
				if (node->parent->left == node)
				{
					Node<T> * parent = node->parent;
					node->parent->left = node->left;
					node->parent = parent;
					while (cur_p)
					{
						_balance(cur_p);
						cur_p = cur_p->parent;
					}
				}
				else
				{
					node->parent->right = node->left;
					node->left->parent = node->parent;
					while (cur_p)
					{
						_balance(cur_p);
						cur_p = cur_p->parent;
					}
				}
			}
			else if (node->right)
			{
				Node<T> * min = _findMin(node->right);
				T m = min->key;
				remove(min->key);
				node->key = m;
				while (cur_p)
				{
					_balance(cur_p);
					cur_p = cur_p->parent;
				}
			}
		}
		else throw std::logic_error("Element isn't find/n");
	}
}
template<typename T>
bool AVL_tree<T>::search(const T& value)const
{
	Node<T> * curEl = root;
	while (curEl != nullptr)
	{
		if (curEl->key == value)
			return true;
		else
		{
			if (value > curEl->key)
				curEl = curEl->right;
			else curEl = curEl->left;
		}
	}
	return false;
}
template<typename T>
void AVL_tree<T>::print(std::ostream & stream)
{
	_print(root, stream, 0);
}
template<typename T>
void AVL_tree<T>::_print(Node<T> * node, std::ostream & stream, size_t level)const
{
	Node<T> * curEl = node;
	if (curEl != nullptr)
	{
		_print(curEl->right, stream, level + 1);
		for (unsigned int i = 0; i < level; ++i)
			stream << '_';
		stream << curEl->key << " " << curEl->height << std::endl;
		_print(curEl->left, stream, level + 1);
	}
}