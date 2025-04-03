class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long ans=0;
        int n=nums.size();
        vector<int> left(n,0);
        vector<int> right(n,0);
        for(int i=1;i<n;i++)
            left[i]=max(left[i-1],nums[i-1]);
        for(int i=n-2;i>=0;i--){
            right[i]=max(right[i+1],nums[i+1]);
        }

        for(int i=0;i<n;i++){
            long long calc= ((long long)left[i]-nums[i])*right[i];
            ans=max(calc,ans);
        }
        return ans;
    }
};