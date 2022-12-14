class Solution{
  public:
    vector <int> countDistinct (int a[], int n, int k)
    {
        vector<int> ans;
        unordered_map<int,int> mp;
        int count=0;
        count=1;
        mp[a[0]]=1;
        
        for(int i=1;i<k;i++){
            if(mp[a[i]]==0){
                count++;
                mp[a[i]]++;
            }
            else
            mp[a[i]]++;
        }
        ans.push_back(count);
        
        for(int i=k;i<n;i++){
            if(mp[a[i]]==0){
                count++;
                mp[a[i]]++;
            }
            else{
                mp[a[i]]++;
            }
            
            mp[a[i-k]]--;
            if(mp[a[i-k]]==0){
                count--;
            }
            ans.push_back(count);
        }
        return ans;
    }
};
