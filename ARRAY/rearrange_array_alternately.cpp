class Solution{
    public:
    // This function wants you to modify the given input
    // array and no need to return anything
    // arr: input array
    // n: size of array
    //Function to rearrange  the array elements alternately.
    void rearrange(long long *arr, int n) 
    { 
        vector<long long>v;
        int i=0,j=n-1;
        while(i<=j){
            v.push_back(arr[j]);
            v.push_back(arr[i]);
            i++;
            j--;
        }
        for(int i=0;i<n;i++){
            arr[i]=v[i];
        }
    }
};
