#include<stdlib.h>
#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>

template<typename T>
struct Node
{
	Node<T> * left;
	Node<T> * right;
	Node<T> * parent;
	T key;
	T val;
	unsigned int height;
	Node(T const& value) : left{ nullptr }, right{ nullptr }, parent{ nullptr }, key{ value }, height{ 1 } {};
	Node(T const& value, Node<T> * parent) : left{ nullptr }, right{ nullptr }, parent{ parent }, key{ value }, height{ 1 } {};
	Node(T const& _key, T const& _val,  Node<T> * parent) : left{ nullptr }, right{ nullptr }, parent{ parent }, key{ _key }, val(_val), height{ 1 } {};
};

template<typename T>
class AVL_tree
{
private:
	Node<T> * root;

	void _deleteNode(Node<T> * node);

	unsigned int _height(Node<T> * node);
	int _balanceFactor(Node<T> * node);
	void _fixHeight(Node<T> * node);

	Node<T> * _rotateLeft(Node<T> * node);
	Node<T> * _rotateRight(Node<T> * node);

	Node<T> * _balance(Node<T> * node);
	Node<T> * _findMin(Node<T> * node);
	Node<T> * _findMax(Node<T> * node);

	void _insert(Node<T>* & node, const T& value);
	void _insert(Node<T>* & node, const T& _key, const T& _val);

	void _remove(Node<T>* & node, const T& value);

	void _print(Node<T> * node, std::ostream & stream, size_t level)const;
public:
	AVL_tree();
	~AVL_tree();

	void insert(const T& _key);
	void insert(const T& _key, const T& _val);

	void remove(const T& value);

	T findMin();
	
	T findMax();

	bool search(const T& value)const;

	void print(std::ostream & stream);
};
