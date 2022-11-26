class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        long long sum=0;
        for(int i=s.size()-1;i>=0;i--){
            sum+=shifts[i];
            s[i]='a'+(int)((s[i]-'a'+sum)%26);
        }
        return s;
    }
};
