class Solution{
    public:
    long long maxSubarraySum(int arr[], int n){
        
        long long res=arr[0];
        int max_ending=arr[0];
        for(int i=1;i<n;i++)
        {
            max_ending=max(max_ending+arr[i],arr[i]);
            long long k=max_ending;
            res=max(res,k);
        }
        return res;
    }
};
