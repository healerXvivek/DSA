class Solution {
public:
    int lengthOfLastWord(string s) {
        string ans="";
        int n=s.length();
        for(int i=n-1;i>=0;i--){
            if(s[i]!=' ')
            ans=s[i]+ans;
            if(s[i]==' ' && ans.length()!=0)
            break;
        }
        return (int)ans.length();
    }
};
