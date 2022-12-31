class Solution {
  public:
    int minLaptops(int n, int start[], int end[]) {
        // Code here
        vector<pair<int,int>>v1;
        for(int i=0;i<n;i++)
        {
            v1.push_back({start[i],1});
            v1.push_back({end[i],-1});
        }
        sort(v1.begin(),v1.end());
        int ans=0,sum=0;
        for(auto it:v1)
        {
            sum+=it.second;
            ans=max(ans,sum);
        
       }
           return ans;
    }
};

/* OTHER APPROACH

class Solution {
  public:
    int minLaptops(int n, int s[], int e[]) {
        // Code here
       sort(s , s+n);
       sort(e , e+n);
        int cntcomp=1;
        int j = 0;
        for(int i = 1; i< n;i++){
            if(s[i] < e[j]){
             cntcomp++;
             }
             else
                 j++;
        }
            
        return cntcomp;
        
    }
};

*/



