class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int open=0;
        int n=s.size();
        string temp="";
        for(int i=0;i<n;i++)
        {
            if(s[i]>='a' && s[i]<='z')
                temp.push_back(s[i]);
            else if(s[i]=='(')
            {
                open++;
                temp.push_back(s[i]);
            }
            else if(s[i]==')' && open>0)
            {
                open--;
                temp.push_back(s[i]);
            }
        }
        string res="";
        for(int i=temp.size()-1;i>=0;i--)
        {
            if(open>0 && temp[i]=='(')
                open--;
            else
                res.push_back(temp[i]);
        }
        reverse(res.begin(),res.end());
        return res;
    }
};