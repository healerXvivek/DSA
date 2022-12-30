class Solution {
  public:
    int setBits(int n) {
        // Write Your Code here
        int res=0;
        while(n>0){
            res+=(n&1);
            n=n>>1;
        }
        return res;
    }
};
