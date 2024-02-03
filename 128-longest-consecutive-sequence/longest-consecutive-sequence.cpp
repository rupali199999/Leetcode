class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0)
            return 0;
        unordered_set<int> st;
        for (int i = 0; i < n; i++) {
            st.insert(nums[i]);
            }
        int len=1;
        for(auto it:st)
        {
            if(st.find(it-1)==st.end())
            {
                int cnt=1;
                int val=it;
                while(st.find(val+1)!=st.end())
                {
                    val++;
                    cnt++;
                }
                len=max(len,cnt);
            }
            
        }
        return len;
    }
};