class Solution {
public:
    int findPeakElement(vector<int>& arr) {
    int n=arr.size();
    int mid,low=0,high=n-1;
    while(low<=high)
    {
        mid=low+(high-low)/2;
        if((mid==0||arr[mid]>=arr[mid-1]) && (mid==n-1||arr[mid]>=arr[mid+1]))
        return mid;
        else if(arr[mid]<=arr[mid+1])
        {
            low=mid+1;
        }
        else
        high=mid-1;
        
    }
   return 0;
    }
};
