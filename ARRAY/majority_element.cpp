class Solution{
  public:
    int majorityElement(int a[], int size)
    {
        unordered_map <int,int> mp;
        int ans=-1;
        for(int i=0;i<size;i++)
        mp[a[i]]++;
        for(auto it : mp)
        {
            if(it.second>(size/2))
            {
            ans=it.first;
            break;
            }
        }
        return ans;
    }
};
