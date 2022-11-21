class Solution
{
    public:
    bool isAnagram(string a, string b){
    if(a.length()!=b.length())
    return false;
    
    int arr[26]={0};
    for(int i=0;i<a.length();i++)
    {
        arr[a[i]-'a']++;
        arr[b[i]-'a']--;
    }
    for(int i=0;i<26;i++)
    {
    if (arr[i]!=0)
    return false;
    }
    return true;
        
    }

};
