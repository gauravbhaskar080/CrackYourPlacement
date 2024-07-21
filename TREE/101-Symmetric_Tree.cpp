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

bool isMirror(TreeNode* node1,TreeNode* node2){
    if(node1 == NULL && node2 == NULL) return true;
    if(node1 == NULL || node2 == NULL) return false;
    if(node1->val != node2->val) return false;
    return isMirror(node1->left,node2->right) && isMirror(node1->right,node2->left);
}
bool isSymmetric(TreeNode* root) {
    return (root == NULL) || isMirror(root->left,root->right);
}

int main(){
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(2);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(4);
    root->right->left = new TreeNode(4);
    root->right->right = new TreeNode(3);
    cout << (isSymmetric(root)? "Yes" : "No") << endl; 
    return 0;
}