void rotate(vector<vector<int> >& mat)
{
    int n=mat.size();
    // TRANSPOSE THE MATRIX
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            swap(mat[i][j],mat[j][i]);
        }
    }
    // REVERSE INDIVIDUAL COLUMNS
    int i=0;
    int j=n-1;
    while(i<=j){
        swap(mat[i],mat[j]);
        i++;
        j--;
    }
}
