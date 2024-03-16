class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> res(2);
        sort(numbers.begin(),numbers.end());
        int left=0,right=numbers.size()-1;
        while(left<right)
        {
            int sum=numbers[left]+numbers[right];

            if(sum==target)
            {
                res[0]=left+1;
                res[1]=right+1;
                break;
            }
            else if(sum>target)
                right--;
            else
                left++;
        }
        return res;
    }
};