/*
* Program Description: BCS370 Final Project
* Created By: Brett Hirschberger
* Creation Date: 4/24/2019
*/
#include "ExpressionTree.h"

int main() {
	ExpressionTree tree = ExpressionTree("((2+3)*(1+(5- 4)))");
	cout << "Expression: ";
	tree.treeToExpression();
	cout << endl << "In order: ";
	tree.inOrderTraversal();
	cout << endl << "Preorder: ";
	tree.preOrderTraversal();
	cout << endl << "Postorder: ";
	tree.postOrderTraversal();
	cout << endl;
	cout << "Size:" << tree.size() << endl;
	tree.expressionToTree("((6+5)-(4+3))");
	cout << "Expression: ";
	tree.treeToExpression();
	cout << endl << "In order: ";
	tree.inOrderTraversal();
	cout << endl << "Preorder: ";
	tree.preOrderTraversal();
	cout << endl << "Postorder: ";
	tree.postOrderTraversal();
	cout << endl;
	cout << "Size:" << tree.size() << endl;
	tree.expressionToTree("(3*((4-8)+4))");
	cout << "Expression: ";
	tree.treeToExpression();
	cout << endl << "In order: ";
	tree.inOrderTraversal();
	cout << endl << "Preorder: ";
	tree.preOrderTraversal();
	cout << endl << "Postorder: ";
	tree.postOrderTraversal();
	cout << endl;
	cout << "Size:" << tree.size() << endl;
	return 0;
}