class Solution {
public:
    int strStr(string haystack, string needle) {
        int res=INT_MAX;
        int m=haystack.size();
        int n=needle.size();
        for(int i=0;i<=m-n;i++)
        {
            if(haystack[i]==needle[0])
            {
                int j=i;
                int k=0;
                while(k<n && haystack[j]==needle[k])
                {
                    j++;
                    k++;
                }
                if(k==n)
                    res=min(res,i);
            }
        }
        return res==INT_MAX ? -1 : res;
    }
};