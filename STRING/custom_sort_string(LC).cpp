class Solution {
public:
    string customSortString(string order, string str) {
        map<char,int> mp;
        string ans="";
        for(auto x : str){
            mp[x]++;
        }
        for(auto x : order){
            auto it=mp.find(x);
            int count= it->second;
            string s(count,x);
            ans+=s;
            mp.erase(x);
        }
        for(auto x : mp){
            string s(x.second,x.first);
            ans+=s;
        }
        return ans;
    }
};
