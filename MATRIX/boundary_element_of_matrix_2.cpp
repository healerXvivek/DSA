class Solution {
public:
    vector<int> BoundaryElements(vector<vector<int>>&matrix){
        vector<int> ans;
        int r=matrix.size();
        int c=matrix[0].size();
        if(r==1){
            for(int i=0;i<c;i++)
            ans.push_back(matrix[0][1]);
        }
        if(c==1){
            for(int i=0;i<r;i++)
            ans.push_back(matrix[i][0]);
        }
        for(int i=0;i<c;i++){
            ans.push_back(matrix[0][i]);
        }
        for(int i=1;i<r;i++){
            ans.push_back(matrix[i][c-1]);
        }
        for(int i=c-2;i>=0;i--){
            ans.push_back(matrix[r-1][i]);
        }
        for(int i=r-2;i>=1;i--){
            ans.push_back(matrix[i][0]);
        }
        return ans;
    }
};
