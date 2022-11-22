class Solution {
public:
    string reverseStr(string s, int k) {
        int i=0;
        int j=min(k,(int)s.length());
        while(i<s.length())
        {
            reverse(s.begin()+i,s.begin()+j);
            i+=k*2;
            j=min(i+k,(int)s.length());
        }
        return s;
    }
};
