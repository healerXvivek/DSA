class Solution{
    public:
    int maxIndexDiff(int A[], int N) 
     {
        int leftMin[N];
        int rightMax[N];
        leftMin[0]=A[0];
        for(int i=1;i<N;i++)
        leftMin[i]=min(leftMin[i-1],A[i]);
        rightMax[N-1]=A[N-1];
        for(int i=N-2;i>=0;i--)
        rightMax[i]=max(rightMax[i+1],A[i]);
        int i=0,j=0,ans=-1;
        while(i<N && j<N)
        {
            if(leftMin[i]>rightMax[j])
            i++;
            else
            {
            ans=max(ans,j-i);
            j++;
            }
        }
        return ans;
     }
};
