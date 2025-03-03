class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
       vector<int> ans;
       int k=0;
       for(int it:nums){
            if(it<pivot)
                ans.push_back(it);
            else if(it==pivot)  k++;
       }
       while(k--)   ans.push_back(pivot);
       for(int it:nums){
            if(it>pivot)
                ans.push_back(it);
       }
       return ans;
    }
};