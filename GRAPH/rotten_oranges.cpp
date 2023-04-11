class Solution 
{
    private:
    bool isSafe(int row, int col, vector<vector<int>> &grid){
        if(row>=0 and col>= 0 and row<grid.size() and col<grid[0].size() and grid[row][col]==1){
            return true;
        }
        return false;
    }
    public:
    //Function to find minimum time required to rot all oranges. 
    int orangesRotting(vector<vector<int>>& grid) {
        // Code here
        int ans=0;
        int fresh=0;
        queue<pair<int,int>> q;
        int n= grid.size();
        int m= grid[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1)
                    fresh++;
                else if(grid[i][j]==2){
                    q.push({i,j});
                }
            }
        }
        
        while(!q.empty()){
            int l= q.size();
            for(int i=0;i<l;i++){
                int row= q.front().first;
                int col = q.front().second;
                q.pop();
                int dr[]={0,0,-1,+1};
                int dc[]={-1,+1,0,0};
                for(int k=0;k<4;k++){
                    int nr= row+dr[k];
                    int nc= col+dc[k];
                    
                    if(isSafe(nr,nc, grid)){
                        grid[nr][nc]=2;
                        fresh--;
                        q.push({nr, nc});
                    }
                }
            }
            ans++;
        }
        
        if(fresh==0){
            return ans-1;
        }
        return -1;
    }
};
