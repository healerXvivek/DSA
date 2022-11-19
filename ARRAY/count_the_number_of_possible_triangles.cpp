class Solution
{
    public:
    int findNumberOfTriangles(int arr[], int n)
    {
        sort(arr,arr+n);
        int count=0;
        for(int i=n-1;i>=2;i--)
        {
            int l=0;
            int r=i-1;
            while(l<r)
            {
                if(arr[l]+arr[r]>arr[i])
                {
                    count +=(r-l);
                    r--;
                }
                else
                {
                    l++;
                }
            }
        }
        return count;
    }
};
