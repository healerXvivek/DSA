int isPossible (string S)
{
    unordered_map<char,int> mp;
    for(int i=0;i<S.size();i++)
    {
        mp[S[i]]++;
    }
    int count=0;
    for(auto it : mp)
    {
        if(it.second % 2!=0)
        count++;
    }
   if(count>1)
    return 0;
    return 1;
}
