class Solution {
  public:
    int numberOfEnclaves(vector<vector<int>> &grid) {
        // Code here
        int n=grid.size();
        int m=grid[0].size();
        
        queue<pair<int,int>> q;
        int vis[n][m]={0};
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i==0 || j==0 || i==n-1 || j==m-1)
                {
                    if(grid[i][j]==1)
                    q.push({i,j}),vis[i][j]=1;
                }
            }
        }
        int delrows[]={-1,0,+1,0};
        int delcols[]={0,+1,0,-1};
        
        while(!q.empty())
        {
            int rows=q.front().first;
            int cols=q.front().second;
            q.pop();
            for(int i=0;i<4;i++)
            {
                int nrows=rows+delrows[i];
                int ncols=cols+delcols[i];
                
                if(nrows>=0 && ncols>=0 && ncols<m && nrows<n && vis[nrows][ncols]==0 && grid[nrows][ncols]==1 )
                {
                    q.push({nrows,ncols});
                    vis[nrows][ncols]=1;
                }
            }
            
        }
            
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(vis[i][j]==0 && grid[i][j]==1)cnt++;
            }
        }
        return cnt;
    }
};
