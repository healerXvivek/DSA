class Solution{
  public:
    int Countpair(int arr[], int n, int sum){
        int ans=0;
        int start=0,end=n-1;
        while(start<end)
        {
            int s=arr[start]+arr[end];
            if(s==sum)
            {
                ans++;
                start++;
                end--;
            }
            else if(s>sum)
            end--;
            else
            start++;
        }
        if (ans==0)
        return -1;
        return ans;
    }
};
