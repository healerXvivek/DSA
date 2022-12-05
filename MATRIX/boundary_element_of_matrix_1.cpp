class Solution {
public:
    vector<int> BoundaryElements(vector<vector<int>>&matrix){
        vector<int>ans;
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0||i==n-1){
                    ans.push_back(matrix[i][j]);
                }else{
                    if(j==0||j==m-1){
                        ans.push_back(matrix[i][j]);
                    }
                }
            }
        }
        return ans;
    }
};
