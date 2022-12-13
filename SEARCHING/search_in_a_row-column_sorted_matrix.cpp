class Solution
{
    public:
    //Function to search a given number in row-column sorted matrix.
    bool search(vector<vector<int> > mat, int n, int m, int x) 
    {
        for(int i=0;i<n;i++){
            if(mat[i][0] <= x && mat[i][m-1] >= x){
                int s=0;
                int e=m-1;
                while(s<=e){
                    int mid=s+(e-s)/2;
                    if(mat[i][mid]==x)
                    return true;
                    else if (mat[i][mid]>x)
                    e=mid-1;
                    else
                    s=mid+1;
                }
            }
        }
        return false;
    }
};
