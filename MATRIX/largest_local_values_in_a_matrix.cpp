class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<vector<int>> ans(n-2,vector<int>(n-2));
      
        for(int i=0;i<=n-3;i++){
            for(int j=0;j<=n-3;j++){
                int m=INT_MIN;
                for(int k=i;k<i+3;k++){
                    for(int l=j;l<j+3;l++){
                        m=max(m,grid[k][l]);
                }
            }
          ans[i][j]=m;
        }
    }
    return ans;
    }
};
