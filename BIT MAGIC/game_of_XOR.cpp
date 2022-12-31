class Solution {
  public:
    int gameOfXor(int N , int A[]) {
        int ans = 0;
        if(N %2 == 0) return 0;
        else {
            for(int i=0; i< N; i= i+2){
                ans = ans ^ A[i];
            }
        }
        return ans;
    }
};
