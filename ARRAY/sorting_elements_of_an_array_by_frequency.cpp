class Solution{
    public:
   static bool mycmp(pair<int,int>p1,pair<int,int>p2)
{
    if(p1.first>p2.first)
    return true;
    else if(p1.first==p2.first && p1.second<p2.second)
    return true;
    else
    return false;
}
    vector<int> sortByFreq(int arr[],int n)
    {
       unordered_map<int,int> mp;
       vector<pair<int,int>> v;
       vector<int> vec;
       for(int i=0;i<n;i++)
       {
           mp[arr[i]]++;
       }
       for(auto x : mp)
       {
           v.push_back({x.second,x.first});
       }
       sort(v.begin(),v.end(),mycmp);
      for(auto x : v)
      {
      int k=x.first;
      while(k!=0)
      {
          vec.push_back(x.second);
          k--;
      }
      }
      return vec;
    }
};
