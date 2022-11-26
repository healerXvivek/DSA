class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
       int n=shifts.size(); 
       long long right_ps[n];
       right_ps[n-1]=shifts[n-1];

       for(int i=n-2;i>=0;i--)
       right_ps[i]=shifts[i]+right_ps[i+1];

       for(int i=0;i<n;i++){
           int curr=s[i]-'a';
           int next=(int)((curr+right_ps[i])%26);
           s[i]=(char)(next+'a');
       }
       return s; 
    }
};
