class Solution
{
  public:
    int extractMaximum(string s) 
    { 
        int ans=0;
        int  sum=0;
        int k=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]>='0' && s[i]<='9')
            {
              sum=sum*10+(s[i]-'0');
              k++;
            }
            else
            {
                ans=max(ans,sum);
                sum=0;
            }
        }
        ans=max(ans,sum);
        if(k==0)
        return -1;
        else
        return ans;
    } 
};
