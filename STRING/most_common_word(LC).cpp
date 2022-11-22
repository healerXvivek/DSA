class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_set<string> s;
        unordered_map<string,int> mp;
        for(string word : banned)
        s.insert(word);
        string temp="";
        int n=paragraph.length();
        for(int i=0;i<n;i++){
            char ch=paragraph[i];
            if(ch==',')
            ch=' ';
            if((ch>='a'&&ch<='z') || (ch>='A'&&ch<='Z'))
            temp+=tolower(ch);
            if((ch==' ' && temp!="") || i==n-1){
                if(s.find(temp)==s.end())
                mp[temp]++;
                temp="";
            }
        }
        pair<string,int> ans;
        for(auto it : mp){
            if(it.second>ans.second){
                ans={it.first,it.second};
            }
        }
    return ans.first;
    }
};
