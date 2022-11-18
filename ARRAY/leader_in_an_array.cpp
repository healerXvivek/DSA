class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int arr[], int n){
         vector<int> v;
    v.push_back(arr[n-1]);
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]>=v.back())
        {
            v.push_back(arr[i]);
        }
        
    }
    reverse (v.begin(),v.end());
    return v; 
    }
};
