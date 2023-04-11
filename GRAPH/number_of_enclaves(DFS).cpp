class Solution {
    private:
    void dfs(int row,int col,vector<vector<int>>&visited,vector<vector<int>>&grid,int n,int m){
        visited[row][col]=1;
        
        int delr[]={-1,0,1,0};
        int delc[]={0,1,0,-1};
        
        for(int i=0;i<4;i++){
            int newr=row+delr[i];
            int newc=col+delc[i];
            
            if(newr>=0 && newr<n && newc>=0 && newc<m && visited[newr][newc]==0 && grid[newr][newc]==1)
            dfs(newr,newc,visited,grid,n,m);
        }
    }
    
  public:
    int numberOfEnclaves(vector<vector<int>> &grid) {
        // Code here
        int n=grid.size();
        int m=grid[0].size();
        
        vector<vector<int>>visited(n,vector<int>(m,0));
        
        
        //traverse through top row and bottom row
        for(int j=0;j<m;j++){
            if(visited[0][j]==0 && grid[0][j]==1)
            dfs(0,j,visited,grid,n,m);
            
            if(visited[n-1][j]==0 && grid[n-1][j]==1)
            dfs(n-1,j,visited,grid,n,m);
        }
        
        //traverse through front column  and right column
        for(int i=0;i<n;i++){
            if(visited[i][0]==0 && grid[i][0]==1)
            dfs(i,0,visited,grid,n,m);
            
            if(visited[i][m-1]==0 && grid[i][m-1]==1)
            dfs(i,m-1,visited,grid,n,m);
        }
        
        
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(visited[i][j]==0 && grid[i][j]==1)
                count++;
            }
        }
        return count;
    }
};
