class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> res;
        unordered_map<int,int> mp;
        for(int n:nums)
            mp[n]++;
        priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>> minh;
        for(auto& m:mp)
        {
            minh.push({m.second,m.first});
            if(minh.size()>k)
                minh.pop();
        }
        while(!minh.empty())
        {
            res.push_back(minh.top().second);
            minh.pop();
        }
        return res;

    }
};