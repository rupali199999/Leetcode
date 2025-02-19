class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int nn:nums)
            mp[nn]=1;
        int n=nums.size();
        for(int i=0;i<=n;i++){
            if(mp[i]==0){
                return i;
            }
        }
        return -1;
    }
};