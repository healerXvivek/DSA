// User function Template for C++

class Solution{
public:
       
    vector<int>ans;
    void solve(int N){
        if(N<=0)
        {
            ans.push_back(N);
            return;
        }  
        ans.push_back(N);
        solve(N-5);
        ans.push_back(N);
    }
    vector<int> pattern(int N){
        solve(N);
        return ans;  
    }
};
