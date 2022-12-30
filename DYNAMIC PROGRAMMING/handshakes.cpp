class Solution{
public:
    
    int count(int N){
        vector<int>dp(N+1,0);
        dp[0]=1;
        
        for(int n=2;n<=N;n+=2){
            for(int i=0;i<=n-2;i+=2){
                dp[n]+=dp[i]*dp[n-2-i];
            }
        }
        return dp[N];
    }
};
