class Solution {
public:
    bool checkRecord(string s) {
        string x="LLL";
        int count=0;
        int found=s.find(x);
        if(found!=string::npos)
        return false;
        for(int i=0;i<s.length();i++){
            if(s[i]=='A')
            count++;
            if(count>=2)
            return false;
        }
        if(found==string::npos && count<2)
        return true;
        return false;
    }
};
