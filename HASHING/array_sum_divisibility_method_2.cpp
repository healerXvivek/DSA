class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        int n = nums.size();
        vector<int> v(k);
        
        for(int i=0;i<n;i++)
        v[nums[i] % k]++;
        
        if(v[0]%2==1)
        return 0;
        
        for(int i=1;i<k;i++){
            if(v[i]!=v[k-i])
            return 0;
        }
        return 1;
    }
};
