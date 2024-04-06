class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int open=0;
        int sz=s.size();
        unordered_set<int> remove_idx;
        for(int i=0;i<sz;i++)
        {
            if(s[i]=='(')
                open++;
            else if(s[i]==')')
            {
                if(open>0)
                    open--;
                else
                    remove_idx.insert(i);
            }
        }
        int close=0;
        for(int i=sz-1;i>=0;i--)
        {
            if(s[i]==')')
                close++;
            else if(s[i]=='(')
            {
                if(close>0)
                    close--;
                else
                    remove_idx.insert(i);
            }
        }
        string res="";
        for(int i=0;i<sz;i++)
        {
            if(remove_idx.find(i)==remove_idx.end())
                res.push_back(s[i]);
        }
        return res;
    }
};