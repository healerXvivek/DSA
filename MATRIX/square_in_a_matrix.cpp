class Solution {
  public:
    long long squaresInMatrix(int m, int n) {
        long long sum = 0;
        while( m != 0 and n != 0)

        {
            int matrixSquaresResult = m * n;
            m--;                             
            n--;                             
            sum = sum + matrixSquaresResult; 
        }                                   
        return sum;
    }
};
