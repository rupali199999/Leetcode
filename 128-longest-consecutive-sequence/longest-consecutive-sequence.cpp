class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int maxLen=0;
        unordered_set<int> myset;
        for(int n:nums)
            myset.insert(n);
        for(auto it:myset)
        {
            if(myset.find(it-1)==myset.end())
            {
                int el=it+1;
                int count=1;
                while(myset.find(el)!=myset.end())
                {
                    el++;
                    count++;
                }
                maxLen=max(maxLen,count);
            }
        }
        return maxLen;
    }
};