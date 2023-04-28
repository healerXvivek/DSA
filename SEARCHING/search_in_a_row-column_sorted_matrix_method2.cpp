class Solution
{
    public:
    //Function to search a given number in row-column sorted matrix.
    bool search(vector<vector<int> > mat, int n, int m, int x) 
    {
        // code here 
        int i=0;
        int j=m-1;
        while(i>=0 && i<n && j>=0 && j<m){
            if(mat[i][j] == x)
            return 1;
            else if (mat[i][j] > x)
            j--;
            else
            i++;
        }
        return 0;
    }
};
