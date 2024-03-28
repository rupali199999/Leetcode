class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res="";
        sort(strs.begin(),strs.end());
        int n=strs.size();
        if(n==1)
            return strs[0];
        string s1=strs.front();
        string s2=strs.back();
        int j=0;
        while(s1[j]==s2[j] && j<s1.size())
        {
            res+=s1[j];
            j++;
        }
        return res;
    }
};