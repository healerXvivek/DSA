class Solution {
  public:
    bool is_prime(int n){
      if (n <= 1)
      return false;
      for(int i=2;i<=sqrt(n);i++){
          if(n%i==0)
          return false;
      }
      return true;
    }
    
    int solve(int n, string s) {
        unordered_map<char,int> mp;
        mp[s[0]]=0;
        int ans=0;
        for(int i=1;i<n;i++){
            mp[s[i]]++;
            if(i%2==0){
                int size=mp.size();
                if(is_prime(size)){
                    ans++;
                }
            }
        }
        return ans;
    }
};
