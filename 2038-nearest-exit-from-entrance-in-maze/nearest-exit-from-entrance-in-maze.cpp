class Solution {
private:
    int bfsPath(int r,int c,int m,int n,vector<vector<char>>& maze, vector<vector<int>>& vis){
        //{{r,c},step}
        int minSteps=INT_MAX;
        queue<pair<pair<int,int>,int>> q;
        q.push({{r,c},0});
        vis[r][c]=1;
        vector<pair<int,int>> directions={{1,0},{-1,0},{0,1},{0,-1}};

        while(!q.empty()){
            int row=q.front().first.first;
            int col=q.front().first.second;
            int step=q.front().second;
            q.pop();

            cout<<"row="<<row<<"col="<<col<<"step="<<step<<endl;
            for(auto dir:directions){
                int nrow=row+dir.first;
                int ncol=col+dir.second;
                if(nrow>=0 && nrow<m && ncol>=0 && ncol<n && !vis[nrow][ncol] && 
                maze[nrow][ncol]=='.')
                {
                    if(nrow==0 || ncol==0 || nrow==m-1 || ncol==n-1)
                        return step+1;
                    q.push({{nrow,ncol},step+1});
                    vis[nrow][ncol]=1;
                }
            }
        }
        return minSteps;
    }
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        int m=maze.size();
        int n=maze[0].size();
        vector<vector<int>> vis(m,vector<int>(n,0));
        
        int ans=bfsPath(entrance[0],entrance[1],m,n,maze,vis);
        return ans==INT_MAX ? -1:ans;
    }
};