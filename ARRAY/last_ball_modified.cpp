class Solution {
  public:
    int solve(int n, vector<int> A) {
        // code here
        int i;
        for(i=n-1;i>=0;i--){
            if(A[i]<9)
            break;
        }
        return i+1;
    }
};
