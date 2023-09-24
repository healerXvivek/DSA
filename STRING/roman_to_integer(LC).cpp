class Solution {
public:
    Solution() {
        ios::sync_with_stdio(false); 
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    int romanToInt(string s) {
      unordered_map<char, int> mp;
      mp['I'] = 1;
      mp['V'] = 5;
      mp['X'] = 10;
      mp['L'] = 50;
      mp['C'] = 100;
      mp['D'] = 500;
      mp['M'] = 1000;
    int l=s.length();
    int ans=0;
    int i=0;
    for (i=0;i<l;i++){
      if(mp[s[i]] < mp[s[i+1]]){
        ans -= mp[s[i]];
      }
      else{
        ans += mp[s[i]];
      }
    }
    return ans;
    }
};
