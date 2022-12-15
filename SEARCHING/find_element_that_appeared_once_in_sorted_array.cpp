# https://practice.geeksforgeeks.org/problems/find-the-element-that-appears-once-in-sorted-array0624/1?page=2&curated[]=1&sortBy=submissions

class Solution
{
  public:
    int findOnce(int arr[], int n)
    {
        int s=0;
        int e=n-1;
        while(s<e){
            int mid=s+(e-s)/2;
            
            if((mid==0 && arr[mid]!=arr[mid+1]) || (mid==n-1 && arr[mid]!=arr[mid-1]))
            return arr[mid];

            if((arr[mid]==arr[mid-1] && mid%2==1) || (arr[mid]==arr[mid+1] && mid%2==0)) 
            s=mid+1;

            else 
            e=mid;
        }  
        return arr[s];    
    }
};
