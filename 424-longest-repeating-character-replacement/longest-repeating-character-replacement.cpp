class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> v(26,0);
        int maxf=0;
        int i=0,j=0;
        int ans=0;
        while(j<s.size())
        {
            v[s[j]-'A']++;
            maxf=max(maxf,v[s[j]-'A']);

            if((j-i+1 - maxf) <=k)
                ans=max(ans,(j-i+1));
            else if(((j-i+1)-maxf) > k)
            {
                v[s[i]-'A']--;
                i++;
            }
            j++;
        }
        return ans;
    }
};