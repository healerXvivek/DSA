class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        int max1;
        int min1;
        if(n==1)
           return 0;

        sort(arr,arr+n);
        int diff=arr[n-1]-arr[0];

        for(int i=1;i<n;i++){
            if(arr[i]-k<0)
              continue;
            else{
                max1=max(arr[i-1]+k,arr[n-1]-k);
                min1=min(arr[i]-k,arr[0]+k);
                diff=min(diff,max1-min1);
            }
        }
        return diff;
    }
};
