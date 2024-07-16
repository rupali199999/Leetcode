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
    bool findPath(TreeNode* root, string& s, int k,char c){
        if(root==nullptr)
            return false;

        s.push_back(c);

        if(root->val==k){
            return true;
        }
        if(((root->left) && findPath(root->left,s,k,'L')) || (root->right && 
        findPath(root->right,s,k,'R')))
            return true;

        s.pop_back();
        return false;

    }
    string getDirections(TreeNode* root, int startValue, int destValue) {
        string ss="";
        string sd="";
        findPath(root,ss,startValue,'S');
        findPath(root,sd,destValue,'S');
        int i=0,j=0;
        while(i<ss.size() && j<sd.size() && ss[i]==sd[j])   i++,j++;
        //thanks for helping kishu
        string res="";
        while(i<ss.size())  res.push_back('U'), i++;
        while(j<sd.size())  res.push_back(sd[j]),  j++;
        return res;
    }
};