class Solution
{
    public:
        string UncommonChars(string a, string b)
        {
            int freq[26]={0};
            
            for(int i=0;i<a.length();i++)
            freq[a[i]-'a']=1;
            
            for(int i=0;i<b.length();i++)
            {
            if(freq[b[i]-'a']==1 || freq[b[i]-'a']==-1)
            freq[b[i]-'a']=-1;
            else
            freq[b[i]-'a']=2;
            
            }
            string s="";
            for(int i=0;i<26;i++)
            if(freq[i]==2 || freq[i]==1)
            {
                s+=(char)(i+97);
            }
            if(s=="")
            return "-1";
            return s;
        }
};
