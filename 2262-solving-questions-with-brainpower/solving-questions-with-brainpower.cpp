class Solution {
public:
    long long mostPoints(vector<vector<int>>& v) {
        int n=v.size();
        vector<long long> dp(n,-1);
        return fun(0,v,dp);
    }
    long long fun(int i,vector<vector<int>>& v,vector<long long>& dp){
        if(i>=v.size()) return 0;
        if(dp[i]!=-1)   return dp[i];
        //choose this
        long long choose=fun(i+v[i][1]+1,v,dp)+v[i][0];
        long long skip=fun(i+1,v,dp);

        return dp[i]=max(choose,skip);
    }
};
