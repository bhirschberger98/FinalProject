#pragma once

#include <iostream>

using namespace std;
template <class T>
struct Node {
	T data;
	Node<T>* left = NULL;
	Node<T>* right = NULL;
	Node<T>* parent = NULL;
};
class BinaryTree {
private:
	void preOrder(Node<char>* node);
	void inOrder(Node<char>* node);
	void postOrder(Node<char>* node);
	void deallocateMemory(Node<char>* node);
protected:
	Node<char>* root;
	Node<char>* createNode(Node<char>* parent);
	int size_ = 1;
public:
	BinaryTree();
	int size();
	void inOrderTraversal();
	void preOrderTraversal();
	void postOrderTraversal();
	~BinaryTree();
};