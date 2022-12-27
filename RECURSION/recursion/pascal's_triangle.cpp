class Solution{
public:
    vector<ll> nthRowOfPascalTriangle(int n) {
        int m=1e9+7;
        vector<ll> ans(n);
        ans[0]=1;
        
        //Base Case 
        if(n==1){
            return ans;
        }else if(n==1){
            ans[1]=1;
            return ans;
        }
        
        //Recursive call for previous row
        vector<ll>prev=nthRowOfPascalTriangle(n-1);
        
        //Forming nth row from previous row
        for(int i=1;i<n-1;i++){
            ans[i]= (prev[i]%m + prev[i-1]%m)%m;//modulo
        }
        ans[n-1]=1;
        
        
        return ans;
    }
};
