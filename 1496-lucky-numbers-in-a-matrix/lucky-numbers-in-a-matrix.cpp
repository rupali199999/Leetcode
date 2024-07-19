class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<pair<int,int>> rowval;
        vector<int> colm(n,-1);
        
        for(int i=0;i<m;i++){
            int minVal=INT_MAX;
            int col=-1;
            for(int j=0;j<n;j++){
                //finding min value in row
                if(minVal>matrix[i][j]){
                    minVal=matrix[i][j];
                    col=j;
                }
                //updating column value
                colm[j] = max(matrix[i][j],colm[j]);
            }
            rowval.push_back({minVal,col});
        }
        vector<int> res;
        for(auto it:rowval){
            if(it.first==colm[it.second])
                res.push_back(it.first);
        }
        return res;
    }
};