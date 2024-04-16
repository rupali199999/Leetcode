/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int findNumber(TreeNode* root,int n)
    {
        if(root==nullptr)
            return 0;
        n = root->val + n*10;
        if(root->right==nullptr && root->left==nullptr)
            return n;
        return findNumber(root->left,n)+findNumber(root->right,n);
    }
    int sumNumbers(TreeNode* root) {
        return findNumber(root,0);

    }
};