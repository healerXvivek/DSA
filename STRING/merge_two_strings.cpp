string merge (string S1, string S2)
{
    int m=S1.length();
    int n=S2.length();
    int i=0,j=0;
    string ans="";
    while(i<m && j<n)
    {
     ans+=S1[i];
     i++;
     ans+=S2[j];
     j++;
    }
    if(i<m)
    {
        while(i<m)
        {
            ans+=S1[i];
            i++;
        }
    }
    if(j<n)
    {
       while(j<n)
       {
           ans+=S2[j];
           j++;
       }
    }
    return ans;
}
