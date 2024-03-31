class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        generateParenthesisHelper(0,0,n,"",res);
        return res;
    }
    void generateParenthesisHelper(int open,int closed,int n,string s,vector<string> &res)
    {
        if(open==closed && open==n)
        {
            res.push_back(s);
            return;
        }
        if(open<n)
        {   
            generateParenthesisHelper(open+1,closed,n,s+"(",res);
        }
        if(closed<open)
        {    
            generateParenthesisHelper(open,closed+1,n,s+")",res);
        }
    }
};