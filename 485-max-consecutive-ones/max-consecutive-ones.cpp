class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            if(nums[0]==1)
                return 1;
            return 0;
        }
        int start=0;
        int maxlen=0;
        while(start<n){
            if(nums[start]==1){
                int end=start;
                while(end<n && nums[end]==1){
                    end++;
                }
                maxlen = max(maxlen,end-start);
                start=end;
            }
            start++;
        }
        return maxlen;
    }
};