class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string,vector<string>> mp;
        if(strs.size()==1)
        {    res.push_back(strs);
            return res;
        }
        for(auto st:strs)
        {
            string key=st;
            sort(key.begin(),key.end());
            mp[key].push_back(st);
        }
        for(auto i:mp)
            res.push_back(i.second);
        return res;

    }
};