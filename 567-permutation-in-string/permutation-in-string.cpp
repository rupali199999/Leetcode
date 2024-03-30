class Solution {
public:
    bool isallzero(vector<int>& v)
    {
        return v==vector<int>(26,0);
    }
    bool checkInclusion(string s1, string s2) {
        vector<int> v(26,0);
        for(char s:s1)
            v[s-'a']++;
        int k=s1.size();
        int i=0,j=0;
        while(j<s2.size()){
            //calculation
            v[s2[j]-'a']--;
            //ans and sliding window
            if(j-i+1 == k)
            {
                if(isallzero(v))
                    return true;
                v[s2[i]-'a']++;
                i++;
            }
            //if len(window)<k
            j++;

        }
        return false;
    }
};