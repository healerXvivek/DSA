class Solution {
  public:
    long long reversedBits(long long X) {
        // code here
        int pow = 31;
        long  result =0; 
        while(X !=0)
        {
            result += ((X&1)<<pow);
            pow--;
            X = X>>1;
        }
        return result;
    }
};
