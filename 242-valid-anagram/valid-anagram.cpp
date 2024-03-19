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
            v1[i-'a']--;
        }
        for(int count : v1) {
            if(count != 0)
                return false;
        }
        return true;
    }
};