class Solution {
public:
    //5C2-->
    // 1*(5-0)/(1)=5...5*(5-1)/2=10
    vector<int> nCr(int n){
        int ans=1;
        vector<int> res;
        res.push_back(1);
        for(int i=1;i<n;i++){
            ans*=(n-i);
            ans=ans/(i);
            res.push_back(ans);
        }
        return res;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> row;
        for(int i=1;i<=numRows;i++){
            row.push_back(nCr(i));
        }
        return row;
    }
    
};