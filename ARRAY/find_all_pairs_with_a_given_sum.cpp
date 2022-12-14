class Solution{
    public:
    vector<pair<int,int>> allPairs(int a[], int b[], int n, int m, int x)
    {
        vector<pair<int,int>> ans;
        unordered_set<int> s(b,b+m);
        
        for(int i=0;i<n;i++){
            if(s.find(x-a[i]) !=s.end())
            ans.push_back({a[i],x-a[i]});
        }
        
        sort(ans.begin(),ans.end());
        return ans;
    }
};
