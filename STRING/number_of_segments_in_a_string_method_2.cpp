class Solution {
public:
    int countSegments(string s) {
        int res = 0;
        int n = s.length();
        for (int i = 0; i < n; ++i) {
            if (s[i]!=' ' && (i==0 || s[i-1]==' ')){
                ++res;
            }
        }
        return res;
    }
};
