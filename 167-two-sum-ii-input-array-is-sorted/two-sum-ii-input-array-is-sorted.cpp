class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> res(2);
        int l=0,r=numbers.size()-1;
        while(l<r)
        {
            int sum=numbers[l]+numbers[r];
            if(sum==target)
            {
                res[0]=l+1;
                res[1]=r+1;
                return res;
            }
            else if(sum<target)
                l++;
            else
                r--;
        }
        return res;
        
    }
};