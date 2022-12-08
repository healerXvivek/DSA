class Solution{
  public:
  
    vector<vector<string> > Anagrams(vector<string>& string_list) {
      
        unordered_map<string, vector<int>> mp;
        int n = string_list.size();
      
        for(int i = 0; i < n; i++){
            string curr = string_list[i];
            sort(curr.begin(), curr.end());
            mp[curr].push_back(i);
        }
      
        vector<vector<string>> ans;
        for(auto &e : mp){
            vector<string> curr;
            for(auto &i : e.second){
                curr.push_back(string_list[i]);
            }
            ans.push_back(curr);
        }
        return ans;
    }
};
