class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        //finding max value
        while( i<n-1 && nums[i]<=nums[i+1] )
            i++;
        //if already sorted
        if(i==n-1)
            return true;
        if(nums[0]<nums[n-1])
            return false;
        //checking the second part of arr
        int maxVal=nums[i];
        for(int j=i+1;j<n;j++){
            if(nums[j]>maxVal)
                return false;
            if(j<n-1 && nums[j]>nums[j+1])
                return false;
        }
        return true;
    }
};