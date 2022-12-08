class Solution{
    public:
    //Function to check if two arrays are equal or not.
    bool check(vector<ll> a, vector<ll> b, int n) {
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            m[a[i]]++;
            m[b[i]]--;
        }
        for(auto x : m){
            if(x.second != 0)
            return 0;
        }
        return 1;
    }
};
