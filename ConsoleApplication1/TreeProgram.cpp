#include "stdafx.h"
#include "TreeProgram.h"

#include <iostream>

using namespace std;

class TreeNode {
public:
	bool initialized = false;
	int value;
	TreeNode *left = NULL;
	TreeNode *right = NULL;
	TreeNode(int value);
	TreeNode(int value, TreeNode left);
	TreeNode(int value, TreeNode left, TreeNode right);
	void show();
};

TreeNode::TreeNode(int value) {
	cout << "init " << value;
	cout << endl;
	this->value = value;	
	this->initialized = true;
}

TreeNode::TreeNode(int value, TreeNode left) {
	cout << "init " << value;
	cout << "init left " << left.value;
	cout << endl;
	this->value = value;
	this->left = &left;
	this->initialized = true;
}

TreeNode::TreeNode(int value, TreeNode left, TreeNode right) {
	cout << "init " << value;
	cout << "init left " << left.value;
	cout << "init right " << right.value;
	cout << endl;
	this->value = value;
	this->left = &left;
	this->right = &right;
	this->initialized = true;
}

void TreeNode::show() {
	cout << "value " << value;
	
	if (left!=NULL) { left->show(); }
	if (right!=NULL) { right->show(); }
}

void TreeProgram::start()
{
	TreeNode t1(1);	
	TreeNode t2(2);
	TreeNode t3(3, t1, t2);
	TreeNode t4(4, t3);
	TreeNode t5(5);
	TreeNode t6(6, t4, t5);
	t6.show();
}
