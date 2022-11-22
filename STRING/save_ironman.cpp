bool saveIronman(string ch)
{
    string temp="";
    int n=ch.length();
    for(int i=0;i<n;i++)
    {
      if((ch[i]>='A' && ch[i]<='Z') || (ch[i]>='a' && ch[i]<='z') || (ch[i]>='0' &&ch[i]<='9'))
      temp+=tolower(ch[i]);
    }
    n=temp.length();
    int i=0;
    int j=n-1;
    bool b=true;
    while(i<=j)
    {
        if(temp[i]!=temp[j])
        {
        b=false;
        break;
        }
       i++;
       j--;
    }
    return b;
}

