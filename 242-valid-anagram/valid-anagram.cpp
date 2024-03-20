class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
            return false;
        vector<int> v1(26,0);
        for(char i:s)
        {
            v1[i-'a']++;
        }
        for(char i:t)
        {
            if(v1[i-'a']==0)
                return false;
            v1[i-'a']--;
        }
        
        return true;
    }
};