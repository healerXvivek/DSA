class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        long long ps=arr[0];
        int start=0;
        for(int i=1;i<=n;i++)
        {
            while(sum>s &&start<i-1)
            {
                ps-=arr[start];
                start++;
            }
            if(ps==s)
            return {start+1,i};
            if(i<n)
            ps+=arr[i]; //prefix sum
        }
        return {-1};
    }
};
