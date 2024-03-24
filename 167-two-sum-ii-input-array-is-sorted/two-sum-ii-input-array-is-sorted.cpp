class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> res(2);
        unordered_map<int,int> mp;
        for(int i=0;i<numbers.size();i++)
        {
            if(mp.find(target-numbers[i])!=mp.end())
            {
                res[0]=mp[target-numbers[i]];
                res[1]=i+1;
                break;
            }
            mp[numbers[i]]=i+1;
        }
        return res;
    }
};