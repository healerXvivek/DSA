class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
    unordered_map<int,int> mp;
    mp[0]=-1;
    int ps=0,ans=0;
    for(int i=0;i<n;i++)
    {
       ps+=A[i];
       if(mp.find(ps)==mp.end())
       {
           mp[ps]=i;
       }
       else
       {
           ans=max(ans,i-mp[ps]);
       }
    }
    return ans;
    }
};
