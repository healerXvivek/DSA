string firstRepChar(string s)
{
    unordered_map<char,int> mp;
    string a="";
    for(int i=0;i<s.length();i++)
    {
        mp[s[i]]++;
        if(mp[s[i]]>1)
        {
            a+=s[i];
            return a;
        }
    }
    return "-1";
}
