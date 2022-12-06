class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
       vector<vector<int>> ans(n,vector<int> (n,0));
       int r=n,c=n,k=1;
       int top=0,left=0,right=c-1,bottom=r-1;
       while(top<=bottom && left<=right){
           for(int i=left; i<=right; i++){
               ans[top][i]=k;
               k++;
           }
           top++;
           for(int i=top; i<=bottom; i++){
               ans[i][right]=k;
               k++;
           }
           right--;
           if(top<=bottom){
               for(int i=right;i>=left; i--){
                   ans[bottom][i]=k;
                   k++;
               }
               bottom--;
           }
           if(left<=right){
               for(int i=bottom; i>=top; i--){
                   ans[i][left]=k;
                   k++;
               }
               left++;
           }
       } 
    return ans;
    }
};
