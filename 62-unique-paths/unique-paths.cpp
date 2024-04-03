class Solution {
public:
    int paths(int i,int j,int m, int n,vector<vector<int>>& dp)
    {
        //if any i or j goes out of bounds then it will return 0, you missed this and put && instead of ||
        if(i>=m || j>=n)
            return 0;
        if(i==m-1 && j==n-1)
            return 1;
        
        if(dp[i][j]!=-1)
            return dp[i][j];
        else            
            return dp[i][j]=paths(i,j+1,m,n,dp)+paths(i+1,j,m,n,dp);  
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp (m,vector<int>(n,-1));
        int count=paths(0,0,m,n,dp);
        return count;
    }
}; 