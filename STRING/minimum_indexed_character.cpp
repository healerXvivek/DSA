class Solution
{
  public:
    //Function to find the minimum indexed character.
    int minIndexChar(string str, string patt)
    {
     unordered_map<char,bool> m;        
     for(int i=0;i<patt.size();i++)
     {
         m[patt[i]]=true;
     }
    for(int i=0;i<str.size();i++)
    {
    if(m[str[i]]==true)
    {
        return i;
    }
    }
    return -1;
    }
};
