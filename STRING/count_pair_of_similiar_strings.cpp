# https://leetcode.com/problems/count-pairs-of-similar-strings/description/

class Solution {
public:
    int similarPairs(vector<string>& words) {
        int n = words.size(), ans = 0;
        for(int i=0; i<n; i++){
            string s1 = words[i];
            sort(s1.begin(), s1.end());
            s1.erase(unique(s1.begin(), s1.end()), s1.end());
            for(int j=i+1; j<n; j++){
                string s2 = words[j];
                sort(s2.begin(), s2.end());
                s2.erase(unique(s2.begin(), s2.end()), s2.end());
                if(s1 == s2){
                    ans++;
                }
            }
        }
        
        return ans;
    }
};
