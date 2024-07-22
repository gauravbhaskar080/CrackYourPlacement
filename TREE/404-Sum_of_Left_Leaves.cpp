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

void getLeftElement(TreeNode* root,int& sum){
    if(!root) return;
    if(root->left && !(root->left->left) && !(root->left->right)) sum += root->left->val;
    getLeftElement(root->left, sum);
    getLeftElement(root->right, sum);
}
int sumOfLeftLeaves(TreeNode* root) {
    int sum=0;
    getLeftElement(root, sum);
    return sum;
}


int main(){
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);
    cout << sumOfLeftLeaves(root) << endl;
    return 0;
}