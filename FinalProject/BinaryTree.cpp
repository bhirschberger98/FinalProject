#include "BinaryTree.h"

//recursively deletes nodes based on postorder traversal
void BinaryTree::deallocateMemory(Node<char>* node) {
	if (node != NULL) {
		deallocateMemory(node->left);
		deallocateMemory(node->right);
		delete node;
	}
}
Node<char>* BinaryTree::createNode(Node<char>* parent) {
	Node<char>* n = new Node<char>();
	n->parent = parent;
	n->left = NULL;
	n->right = NULL;
	size_++;
	return n;
}

BinaryTree::BinaryTree() {
	root = new Node<char>();
}
//returns number of nodes
int BinaryTree::size() {
	return size_;
}

void BinaryTree::inOrderTraversal() {
	inOrder(root);
}

void BinaryTree::preOrder(Node<char>* node) {
	if (node != NULL) {
		cout << node->data << " ";
		preOrder(node->left);
		preOrder(node->right);
	}
}

void BinaryTree::inOrder(Node<char>* node) {
	if (node != NULL) {
		inOrder(node->left);
		cout << node->data << " ";
		inOrder(node->right);
	}
}
void BinaryTree::postOrder(Node<char>* node) {
	if (node != NULL) {
		postOrder(node->left);
		postOrder(node->right);
		cout << node->data << " ";
	}
}

void BinaryTree::preOrderTraversal() {
	preOrder(root);
}

void BinaryTree::postOrderTraversal() {
	postOrder(root);
}

BinaryTree::~BinaryTree() {
	deallocateMemory(root);
}