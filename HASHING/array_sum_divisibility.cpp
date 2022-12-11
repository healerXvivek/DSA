class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        int n = nums.size();
        map<int, int> mp;
        for(int i = 0; i < n; i++) 
        mp[nums[i]%k]++;
        
        for(int i = 0; i <= k/2; i++)
        {
            if(i == 0 || i == k-i) {
                if(mp[i]%2 != 0) 
                return false;
                continue;
            }
            if(mp[i] != mp[k-i]) 
            return false;
        }
        return true;
    }
};
