class Solution {
public:
    Solution() {
        ios::sync_with_stdio(false); 
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    string longestCommonPrefix(vector<string>& s) {
        sort(s.begin(),s.end());
        int n=s.size();
        int l=min(s[0].size(),s[n-1].size());
        int i=0;
        string ans="";
        while(i<l && s[0][i]==s[n-1][i]){
        ans+=s[0][i];
        i++;
        }
        return ans;
    }
};


//


class Solution {
public:
    Solution() {
        ios::sync_with_stdio(false); 
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    string longestCommonPrefix(vector<string>& s) {
        sort(s.begin(),s.end());
        int n=s.size();
        int l=min(s[0].size(),s[n-1].size());
        int i=0;
        string ans="";
        while(i<l && s[0][i]==s[n-1][i]){
        ans+=s[0][i];
        i++;
        }
        return ans;
    }
};
