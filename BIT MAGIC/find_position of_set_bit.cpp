class Solution {
  public:
    int findPosition(int n){
        if(n==0)
        return -1;
        if((n&(n-1)) ==0){
            int k=1;
            while((n&1) ==0){
                k++;
                n=n>>1;
            }
        return k; 
        }
        return -1;
    }
};
