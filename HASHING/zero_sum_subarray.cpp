class Solution{
    public:
    //Function to count subarrays with sum equal to 0.
    long long int findSubarray(vector<long long int> arr, int n ) { 
        long long int count =0;
        unordered_map<int , int> mp;
        int ps = 0;
        for(auto x : arr)
        {
            ps+=x;
            count+=mp[ps];
            if(ps == 0) 
            count++;
            mp[ps]++;
        } 
        return count;
    }
};
