
#include <cstdlib>
#include <functional>
#include <utility>
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <string>
#include <ctime>
#include <vector>
#include <fstream>



template<typename T> struct treap_node {
	typedef treap_node<T>* node;

	T key;
	T val;
	int priority;
	int size;
	node left;
	node right;

	treap_node(const T& _key) :
		key(_key),
		priority(rand() ^ (rand() << 15)),
		size(1),
		left(0),
		right(0)
	{}

	treap_node(const T& _key, const T& _va) :
		key(_key),
		val(_va),
		priority(rand() ^ (rand() << 15)),
		size(1),
		left(0),
		right(0)
	{}

	inline void update_size() { size = (left ? left->size : 0) + (right ? right->size : 0) + 1; }
};

template<typename T> struct treap {
	typedef treap_node<T>* node;
	typedef std::pair<node, node> node_pair;

	node root;

	treap() :
		root(0)
	{}
	virtual ~treap() {}

	bool insert(const T& x);
	bool insert(const T& x, const T& va);
	bool erase(const T& x);
	bool contains(const T& x) const;
	int size() const;
	bool empty() const;

	T findMin();
	T findMax();
	treap_node<T> * _findMin(treap_node<T> * node);
	treap_node<T> * _findMax(treap_node<T> * node);

	static node_pair treap_split(node v, const T& key, bool less_equal = true);
	static node treap_merge(node left, node right);

	static const int TMP_ARRAY_SIZE = 256;
};

