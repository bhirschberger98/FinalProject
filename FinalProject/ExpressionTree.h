#pragma once
#include "BinaryTree.h"

class ExpressionTree :public BinaryTree {
private:
	void printExpression(Node<char>* p);
public:
	ExpressionTree(string expression);
	void expressionToTree(string expression);
	void treeToExpression();
	~ExpressionTree();
};