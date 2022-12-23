class Solution {
  public:
    int solve(int n) {
        int ans=0,k=0;
        while(n>0){
            if(n%2==0){
                k=n/2;
                n-=k;
                ans++;
            }
            else{
                k=(n+1)/2;
                n-=k;
                ans++;
            }
        }
        return ans;
    }
};
