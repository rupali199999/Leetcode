class Solution {
public:
    int countKeyChanges(string s) {
        int count=0;
        int n=s.size();
        for(int i=0;i<n-1;i++)
        {
            if(s[i]==s[i+1] || s[i]-'a'==s[i+1]-'A' || s[i]-'A'==s[i+1]-'a')
                count++;
        }
        return n-1-count;
    }
};