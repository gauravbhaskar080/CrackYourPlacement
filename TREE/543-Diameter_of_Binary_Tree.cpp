#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

int diameterOfBinaryTreeUtil(TreeNode *root, int& diameter){
    if (root == NULL) return 0;
    int left = diameterOfBinaryTreeUtil(root->left, diameter);
    int right = diameterOfBinaryTreeUtil(root->right, diameter);
    diameter = max(diameter,left+right);
    return max(left,right) + 1;
}

int diameterOfBinaryTree(TreeNode *root){
    int diameter = 0;
    diameterOfBinaryTreeUtil(root, diameter);
    return diameter;
}

int main(){
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    cout << diameterOfBinaryTree(root) << endl;
    return 0;
}