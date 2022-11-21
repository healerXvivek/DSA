
string firstRepChar(string s)
{
    int arr[26]={0};
    string a;
    for(int i=0;i<s.length();i++)
    {
        arr[s[i]-'a']++;
        if (arr[s[i]-'a']>1)
        {
            a.push_back(s[i]);
        return a;
    }
    }
    return "-1";
}
