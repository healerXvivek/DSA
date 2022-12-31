class Solution{
  public:
    int MissingNumber(vector<int>& a, int n) {
        
        int res = a[0];
        for (int i = 1; i < n-1 ; i++)
        res = res ^ a[i];
        
        for (int i = 1; i <= n ; i++)
        res = res ^ i; 
        
        return res;
        }
};
