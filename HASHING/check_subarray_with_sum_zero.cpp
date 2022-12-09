class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        //Your code here
        unordered_set<int> s;
        int ps=0;
        for(int i=0;i<n;i++){
            ps+=arr[i];
            if(s.find(ps) != s.end())
            return 1;
            if(ps == 0)
            return 1;
            s.insert(ps);
        }
        return 0;
    }
};
