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
private:
    void dfs(TreeNode* root,TreeNode* parent, vector<TreeNode*>& v,unordered_map<int,bool>& mp){
        if(root==nullptr)
            return;
        bool deleted=mp.find(root->val)!=mp.end();

        if(parent==nullptr && !deleted)
            v.push_back(root);
        
        dfs(root->left,root,v,mp);
        dfs(root->right,root,v,mp);

        //value is among to_deleted nodes
        if(deleted){
            if(root->left!=NULL && mp.find(root->left->val)==mp.end())
                v.push_back(root->left);
            if(root->right!=NULL && mp.find(root->right->val)==mp.end())
                v.push_back(root->right);
            if(parent!=nullptr){
                if(parent->left==root)
                    parent->left=NULL;
                else
                    parent->right=NULL;
            }
            delete root;
        }

    }
public:
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        vector<TreeNode*> v;

        unordered_map<int,bool> mp;
        for(int i:to_delete)
            mp[i]=true;

        dfs(root,nullptr,v,mp);

        return v;
    }
};