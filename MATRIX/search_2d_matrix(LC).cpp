class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int X) {
        int m=mat.size();
        int n=mat[0].size();
       for(int i=0;i<m;i++){
           if(mat[i][0]<=X && mat[i][n-1]>=X){
	        if(find(mat[i].begin(),mat[i].end(),X)!=mat[i].end())
	        return 1;
	    }
       }
	    return 0;
    }
};
