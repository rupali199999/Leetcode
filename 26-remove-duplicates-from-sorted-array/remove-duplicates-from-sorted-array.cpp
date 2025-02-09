class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==1)
            return 1;
        int k=1;
        int curr=nums[0];
        int i=1,j=0;
        int n=nums.size();
        while(i<n && j<n){
            if(curr==nums[i])
                i++;
            else if(curr!=nums[i]){
                curr=nums[i];
                k++;
                j++;
                nums[j]=curr;
            }
        }
        return k;
    }
};