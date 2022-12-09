class Solution{
  public:
    int maxLen(int arr[], int n)
    {
        for(int i=0;i<n;i++){
            if(arr[i]==0)
            arr[i]=-1;
        }
        unordered_map<int,int> mp;
        mp[0]=-1;
        int ps=0,ans=0;
        for(int i=0;i<n;i++){
            ps+=arr[i];
            if(mp.find(ps)==mp.end())
            mp[ps]=i;
            else{
                ans=max(ans,i-mp[ps]);
            }
        }
        return ans;
    }
};
