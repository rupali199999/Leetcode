class Solution {
public:
    void markVal(int p, int m, int n, vector<vector<int>>& res, vector<vector<int>>& vis, vector<int>& rowSum, vector<int>& colSum) {
        int r = min(p, m - 1);
        int c = p - r;
        
        while (r >= 0 && c < n) {
            if (!vis[r][c]) {
                int val = min(rowSum[r], colSum[c]);
                res[r][c] = val;
                rowSum[r] -= val;
                colSum[c] -= val;
                vis[r][c] = 1;
            }
            if (rowSum[r] == 0) r--;
            if (colSum[c] == 0) c++;
        }
    }
    
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        int m = rowSum.size();
        int n = colSum.size();
        vector<vector<int>> res(m, vector<int>(n, 0));
        vector<vector<int>> vis(m, vector<int>(n, 0));
        
        int p = m + n - 1;
        
        for (int i = 0; i < p; i++) {
            markVal(i, m, n, res, vis, rowSum, colSum);
        }
        
        return res;
    }
};

