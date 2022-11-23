class Solution {
public:
    int countSegments(string s) {
        if(s.length()==0)
        return 0;
        s+=' ';
        int ans=0;
        string temp="";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==' ' && temp.length()>0){
                ans++;
                temp=""; 
            }
            else if(s[i]!=' '){
                temp+=s[i];
            }
        }
        return ans;
    }
};
