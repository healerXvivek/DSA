class Solution{
  public:
    int Countpair(int arr[], int n, int sum){
        int ans = 0 ;
        unordered_map<int, int> m; 
     for(int i = 0  ; i< n ; i++){
         int target = sum - arr[i];
         if(m[target] ){
              ans++;
         }
         ++m[arr[i]];
        }
     if(ans) return ans;
     else return -1;
      
    }
};
