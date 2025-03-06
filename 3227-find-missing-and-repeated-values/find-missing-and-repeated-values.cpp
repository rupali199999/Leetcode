class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> ans(2,0);
        int n=grid.size();
        vector<int> g(n*n,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                g[grid[i][j]-1]++;
                if(g[grid[i][j]-1]>1)
                    ans[0]=grid[i][j];
            }
        }
        for(int i=0;i<n*n;i++){
            if(g[i]==0){
                ans[1]=i+1;
            }
        }
        return ans;
    }
};