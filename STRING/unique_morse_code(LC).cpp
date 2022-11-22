class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> mc={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_set<string> s;
        for(string &word : words)
        {
            string ans="";
            for(char ch : word){
                ans+=mc[ch-'a'];
            }
            s.insert(ans);
        }
        return (int)s.size();
    }
};
