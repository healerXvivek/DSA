int kthSmallest(int mat[MAX][MAX], int n, int k)
{
  vector<int> v;
  for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
          v.push_back(mat[i][j]);
      }
  }
  sort(v.begin(),v.end());
  return v[k-1];
}
