class Solution{
    public:
    int maxSubArraySum(int a[],int n)
    {
       int max_so_far=a[0];
       int curr_max=a[0];
    
       for(int i=1;i<n;i++)
       {
            curr_max=max(a[i],curr_max+a[i]);
            max_so_far=max(max_so_far,curr_max);
       }
       max_so_far=max(0,max_so_far);
       return max_so_far;
    }
    
    int maxOnes(int a[], int n)
    {
        int i, cnt=0;
        for(i=0;i<n;i++)
        {
            if(a[i]==0)
                a[i]=1;
            else
            {
                cnt++;
                a[i]=-1;
            }
        }
        return (cnt+maxSubArraySum(a,n)) ;
    }
};
