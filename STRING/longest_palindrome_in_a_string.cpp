class Solution {
  public:
    string longestPalin (string s) {
        int n=s.size();
        if(n<=1)
        return s;
        int maxl=1;
        int start=0;
        
        // odd palindrome
        for(int i=0;i<n;i++){
            int l=i;
            int r=i;
            while(s[l]==s[r] && l>=0 && r<n){
                l--;
                r++;
            }
            int len=r-l-1;
            if(len>maxl){
                maxl=len;
                start=l+1;
            }
        }
        
        // even palindrome
        for(int i=0;i<n;i++){
            int l=i;
            int r=i+1;
            while(s[l]==s[r] && l>=0 && r<n){
                l--;
                r++;
            }
            int len=r-l-1;
            if(len>maxl){
                maxl=len;
                start=l+1;
            }
        }
        return s.substr(start,maxl);
    }
};
