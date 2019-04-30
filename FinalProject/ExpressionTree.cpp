#include "ExpressionTree.h"

ExpressionTree::ExpressionTree(string expression) :BinaryTree() {
	expressionToTree(expression);
}

ExpressionTree::~ExpressionTree(){

}

void ExpressionTree::expressionToTree(string expression) {
	Node<char>* tmp = root;
	for (int i = 0; i < expression.length(); i++) {
		//char x = expression[i];
		switch (expression[i]) {
		case '(':
			//creates two new nodes with the current node as the parrent
			tmp->left = createNode(tmp);
			tmp->right = createNode(tmp);
			tmp = tmp->left;
			break;
		case '+':
		case '-':
		case '*':
		case '/':
		case '�':
			tmp->data = expression[i];
			tmp = tmp->right;
			break;
		case ')':
			if (tmp->parent != NULL)
				tmp = tmp->parent;
			break;
		case' '://ignores spaces from expression
			continue;
		default:
			tmp->data = expression[i];
			tmp = tmp->parent;
			break;
		}
	}
}
//recursively prints out expression based on inorder Traversal
void ExpressionTree::printExpression(Node<char>* node) {
	if (node != NULL) {
		if (node->data == '+' || node->data == '-' ||
			node->data == '*' || node->data == '/' || node->data == '�') {
			cout << "(";
		}
		printExpression(node->left);
		cout << node->data;
		printExpression(node->right);
		if (node->data == '+' || node->data == '-' ||
			node->data == '*' || node->data == '/' || node->data == '�') {
			cout << ")";
		}
	}
}

void ExpressionTree::treeToExpression() {
	printExpression(root);
}