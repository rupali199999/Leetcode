class Solution {
public:
    int m,n;
    bool dfs(vector<vector<char>>& board, string word,int r,int c,int w)
    {
        int len=word.size();
        if(w==len)
            return true;
        if( r<0 || c<0 || r>=m || c>=n || word[w]!=board[r][c])
            return false;
            
        char temp=board[r][c];
        board[r][c]='#';
        bool res = dfs(board,word,r+1,c,w+1) || 
                   dfs(board,word,r,c+1,w+1) || 
                   dfs(board,word,r-1,c,w+1) || 
                   dfs(board,word,r,c-1,w+1);
        
        board[r][c]=temp;
        return res;
            
    }
    

    bool exist(vector<vector<char>>& board, string word) {
        m=board.size();
        n=board[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
                if(dfs(board,word,i,j,0))
                    return true;
        }
        return false;
    }
};