class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int,int> mp;
        vector<int> res;
        for(int i=0;i<numbers.size();i++)
        {
            if(mp.find(target-numbers[i])!=mp.end())
            {
                res.push_back(mp[target-numbers[i]]);
                res.push_back(i+1);
                break;
            }
            mp[numbers[i]]=i+1;
        }
        return res;
    }
};