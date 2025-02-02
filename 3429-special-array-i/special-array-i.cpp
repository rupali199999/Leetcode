class Solution {
public:
    bool isOdd(int num1){
        return num1%2!=0;
    }
    bool isEven(int num2){
        return num2%2==0;
    }
    bool isArraySpecial(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
            return true;
        for(int i=0;i<n-1;i++){
            if( (isOdd(nums[i]) && isOdd(nums[i+1])) || (isEven(nums[i]) && isEven(nums[i+1])) )
            {
                return false;
            }
        }
        return true;
    }
};