class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int,int>> st;
        int n=temperatures.size();
        vector<int> ans(n);
        st.push({temperatures[n-1],n-1});
        ans[n-1]=0;
        for(int i=n-2;i>=0;i--)
        {
            if(st.top().first>temperatures[i])
                ans[i]=st.top().second-i;
            while(!st.empty() &&  st.top().first <= temperatures[i])
                st.pop();
            if(!st.empty())
                ans[i]=st.top().second-i;
            st.push({temperatures[i],i});
        }
        return ans;
    }
};