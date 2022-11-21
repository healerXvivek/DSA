class Solution{   
public:
    int getMinDiff(int arr[], int n, int k) {
        sort(arr,arr+n);
        int currmin=arr[0];
        int currmax=arr[n-1];
        int ans=currmax-currmin;
        for(int i=1;i<n;i++){
            currmin=min(arr[0]+k,arr[i]-k);
            currmax=max(arr[i-1]+k,arr[n-1]-k);
            ans=min(ans,currmax-currmin);
        }
        return ans;
    }
};
