class Solution {
public:
    int numberOfSubstrings(string s) {
        unordered_map<char,int> mp;
        int count=0,i=0;
        int n=s.size();
        for(int j=0;j<n;j++){
            mp[s[j]]++;

            while(mp['a']>0 && mp['b']>0 && mp['c']>0){
                count+=(n-j);
                mp[s[i]]--;
                i++;
            }
        }
        return count;
    }
};