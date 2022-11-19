class Solution{
    public:
    int maxIndexDiff(int A[], int N) 
     {
        int k = 0;
        for(int i = N-1; i>0; i--)
        {
            if(A[i]>=A[0])
            {
                k = i;
                break;
            }
        }
        for(int i = 1; i<N-k-1; i++)
        {
            for(int j = N-1; j>k;j--)
            {
                if(A[i]<A[j])
                {
                    k = max(j-i,k);
                    break;
                }
            }
        }
        return k;
    }
};
