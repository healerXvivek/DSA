class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        int arr[n]={0};
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(M[i][j]==1){
                    arr[i]=1;
                }
            }
        }
        int cnt=0;
        int ans;
        for(int i=0; i<n; i++){
            if(arr[i]==0){
                cnt++;
                ans=i;
            }
        }
        if(cnt==1) 
        return ans;
        return -1;
    }
};
