class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for(int i=0;i<n;i++){
            int j=0;
            while(j<n/2){
                int temp=matrix[i][j];
                matrix[i][j]=matrix[i][n-1-j];
                matrix[i][n-1-j]=temp;
                j++;
            }
        }
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-i;j++)
            {
                if(i==j){
                    int temp=matrix[i][j];
                    matrix[i][j]=matrix[n-1-i][n-1-j];
                    matrix[n-1-i][n-1-j]=temp;
                    cout<<temp<<endl;
                }
                else{
                    int temp=matrix[i][j];
                    matrix[i][j]=matrix[n-1-j][n-1-i];
                    matrix[n-1-j][n-1-i]=temp;
                }
            }
        }
    }
};