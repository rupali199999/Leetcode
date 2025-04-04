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
    int depth=0;
    void maxdepth(TreeNode* node, int d){
        if(node==NULL)
            return;
        depth=max(depth,d);
        if(node->left)  maxdepth(node->left,d+1);
        if(node->right) maxdepth(node->right,d+1);
    }
    TreeNode* lca(TreeNode* root, int d){
        if(root==NULL)
            return NULL;
        if(d==depth){
            return root;
        }
        TreeNode* l=lca(root->left,d+1);
        TreeNode* r=lca(root->right,d+1);
        if(l==NULL && r==NULL)
            return NULL;
        else if(r==NULL){
            return l;
        }
        else if(l==NULL){
            return r;
        }
        return root;
    }
    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        maxdepth(root,0);
        return lca(root,0);
    }
};