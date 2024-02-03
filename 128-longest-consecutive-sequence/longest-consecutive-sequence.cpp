class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        sort(nums.begin(),nums.end());
        int lastSmallest=INT_MIN;
        int len=1;
        int currCount=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]-1 == lastSmallest)
            {
                lastSmallest=nums[i];
                currCount++;
            }
            else if(nums[i]!=lastSmallest)
            {
                lastSmallest=nums[i];
                currCount=1;
            }
            len=max(len,currCount);
        }
        return len;
    }
};