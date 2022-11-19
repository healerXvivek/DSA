class Solution{
    public:
    long long trappingWater(int arr[], int n){
        int left[n];
    	int right[n];
    	int curr=arr[0];
    	for(int i=0;i<n;i++)
        {
            if(arr[i]>curr)
            curr=arr[i];
            left[i]=curr;
        }
         curr=arr[n-1];
        for(int i=n-1;i>=0;i--)
        {
            if(arr[i]>curr)
            curr=arr[i];
            right[i]=curr;
        }
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=min(left[i],right[i])-arr[i];
        }
        return sum;
    }
};
