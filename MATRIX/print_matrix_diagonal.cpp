class Solution{
  public:
    vector<int> matrixDiagonally(vector<vector<int>>&mat)
    {
         vector<int> v;
         int n = mat.size(); 
         int row=0,col=0;
         bool up=true;
         while(row<n && col<n){
             if(up){
                 while(row>0 && col<n-1){
                     v.push_back(mat[row][col]);
                     row--;
                     col++;
                 }
                 v.push_back(mat[row][col]);
                 if(col==n-1){
                     row++;
                 }
                 else{
                     col++;
                 }
             }else{
                  while(col>0 && row<n-1){
                     v.push_back(mat[row][col]);
                     row++;
                     col--;
                 }
                 v.push_back(mat[row][col]);
                 if(row==n-1){
                     col++;
                 }
                 else{
                     row++;
                 }

             }
             up=!up;
         }
         return v;
    }
};
