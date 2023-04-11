class Solution{
    
private:
    void dfs(int row,int col,vector<vector<int>>&vis,vector<vector<char>>&mat,int delrow[],int delcol[],int n,int m)
    {
        vis[row][col] = 1;
        
        for(int i=0;i<4;i++)
        {
            int nrow = row + delrow[i];
            int ncol = col + delcol[i];
            
            if(nrow>=0 and nrow<n and ncol>=0 and ncol<m and !vis[nrow][ncol] and mat[nrow][ncol]=='O')
            {
                dfs(nrow,ncol,vis,mat,delrow,delcol,n,m);
            }
        }
        
    }
    
public:
    vector<vector<char>> fill(int n, int m, vector<vector<char>> mat)
    {
        vector<vector<int>>vis(n,vector<int>(m,0));
        
        int delrow[] = {-1,0,1,0};
        int delcol[] = {0,1,0,-1};
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(!vis[i][j] and (i==0 || i == n-1) and mat[i][j] == 'O')
                    dfs(i,j,vis,mat,delrow,delcol,n,m);
                    
                if(!vis[i][j] and (j==0 || j == m-1) and mat[i][j] == 'O')
                    dfs(i,j,vis,mat,delrow,delcol,n,m);
            }
        }
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(vis[i][j] != 1 and mat[i][j] == 'O')
                mat[i][j] = 'X';
                
            }
        }
        return mat;
    }
};
