class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1){
            return s;
        }
        string ans="";
        for(int r=0;r<numRows;r++){
            int inc=2*(numRows-1);
            for(int i=r;i<s.length();i+=inc){
                ans+=s[i];
                if(r>0 && r<numRows-1 && i+inc-2*r<s.length())
                ans+=s[i+inc-2*r];
            }
        }
        return ans;
    }
};
