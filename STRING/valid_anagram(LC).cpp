class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size())
        return false;
        int v[26]={0};
        for(int i=0;i<s.length();i++){
            v[s[i]-'a']++;
        }
        for(int i=0;i<t.length();i++){
            v[t[i]-'a']--;
            if(v[t[i]-'a'] < 0)
            return false;
        }
        for(int i=0;i<s.length();i++){
            if(v[s[i]-'a']!=0)
            return false;
        }
        return true;
    }
};
