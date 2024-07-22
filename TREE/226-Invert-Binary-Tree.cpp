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

<<<<<<< HEAD
TreeNode *invertTree(TreeNode *root){
    if (root == NULL) return NULL;
=======
TreeNode *invertTree(TreeNode *root)
{
    if (root == NULL)
        return NULL;
>>>>>>> aeb90db55ffafa9ce08a9b80edf6f58ba2f7eabd

    TreeNode *left = invertTree(root->left);
    TreeNode *right = invertTree(root->right);

    root->left = right;
    root->right = left;

    return root;
}

<<<<<<< HEAD
int main(){
=======
int main()
{
>>>>>>> aeb90db55ffafa9ce08a9b80edf6f58ba2f7eabd
    TreeNode *root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->right = new TreeNode(7);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(9);
    
    invertTree(root);
    
    // Print the inverted tree
    queue<TreeNode *> q;
    q.push(root);
    while (!q.empty())
    {
        TreeNode *node = q.front();
        q.pop();
        cout << node->val << " ";
        if (node->left)
        {
            q.push(node->left);
        }
        if (node->right)
        {
            q.push(node->right);
        }
        cout << " ";
    }

    return 0;
}