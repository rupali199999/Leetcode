class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int currSum=0;
        int count=0;
        unordered_map<int,int> freq;

        for(int num:nums){
            currSum+=num;
            if(currSum==goal)
                count++;
            
            if(freq.find(currSum-goal)!=freq.end())
            {
                count+=freq[currSum-goal];
            }
            freq[currSum]++;
        }
        return count;
    }
};