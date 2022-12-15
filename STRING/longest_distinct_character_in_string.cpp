int longestSubstrDistinctChars (string S)
{
    int n=S.length();
    int ans=0;
    int start=0,end=0;
    unordered_set<char>s;
  
    while(start<n){
        auto it=s.find(S[start]);
        if(it==s.end())
        {
            if(start-end+1>ans) ans=start-end+1;
            s.insert(S[start]);
            start++;
        }
        else{
            s.erase(S[end]);
            end++;
        }
        
    } return ans;
}
