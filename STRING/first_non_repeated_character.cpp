class Solution
{
    public:
    char nonrepeatingCharacter(string s1)
    {
    int arr[26]={0};
    for (int i=0;i<s1.length();i++)
    {
      arr[s1[i]-'a']++;
    }
    for (int i=0;i<s1.length();i++)
    {
      if(arr[s1[i]-'a']==1)
      return s1[i];
    }
    return '$';
    }

};
