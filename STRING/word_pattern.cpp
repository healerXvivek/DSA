class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> map1;
        unordered_map<string, char> map2;
        vector<string> words;

        int index = 0;
        string temp = "";
        while(index < s.size()){
            if(s[index] == ' ') {
                words.push_back(temp);
                temp = "";
            }
            else {
                temp += s[index];
            }
            index++;
        }
        words.push_back(temp);

        if(pattern.size() != words.size())
            return false;

        for(int i=0; i<pattern.size(); i++) {
            auto got1 = map1.find(pattern[i]);
            if(got1 == map1.end())
                map1[pattern[i]] = words[i];
            else if(got1->second != words[i])
                return false;

            auto got2 = map2.find(words[i]);
            if(got2 == map2.end())
                map2[words[i]] = pattern[i];
            else if(got2->second != pattern[i])
                return false;
        }

        return true;
    }
};
