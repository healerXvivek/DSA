class Solution{   
public:
    int findMissing(int arr[], int n) {
        int diff=(arr[n-1]-arr[0])/n;
        for(int i=0;i<n;i++){
            if((arr[i]+diff)!=arr[i+1])
            return(arr[i]+diff);
        }
    }
};
