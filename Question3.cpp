#include <bits/stdc++.h>
using namespace std;

// A binary tree node
struct Tree {
	int data;
	struct Tree *left, *right;
};

 
struct Tree* addNode(int data)
{
	struct Tree* addNode = new Tree;
	addNode->data = data;
	addNode->left = addNode->right = NULL;
	return (addNode);
}


int findMax(Tree* root, int& ans)
{
	// Base Case
	if (root == NULL)
		return 0;

	 
	int l = findMax(root->left, ans);
	int r = findMax(root->right, ans);

	 
	int max_single = max(max(l, r) + root->data, root->data);
	int max_top = max(max_single, l + r + root->data);

	ans = max(ans, max_top); 
	return max_single;
}

 
int findMaxSum(Tree* root)
{ 
	int ans = INT_MIN; 
	 
	findMax(root, ans);
	return ans;
}

 
int main(void)
{
	struct Tree* root = addNode(10);
	root->left = addNode(20);
	root->right = addNode(10);
	root->left->left = addNode(10);
	root->left->right = addNode(5);
	root->right->right = addNode(-15);
	root->right->right->left = addNode(20);
	root->right->right->right = addNode(24);

	 
	cout << "Max path sum is " << findMaxSum(root);
	return 0;
}
