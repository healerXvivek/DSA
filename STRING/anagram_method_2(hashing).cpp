class Solution
{
    public:
    bool isAnagram(string a, string b){
    if(a.length()!=b.length())
    return false;
    
    unordered_map<char,int> mp;
    for(int i=0;i<a.length();i++)
    {
        mp[a[i]]++;
        mp[b[i]]--;
    }
    for(int i=0;i<a.length();i++)
    {
    if (mp[a[i]]!=0)
    return false;
    }
    return true;
    }

};
