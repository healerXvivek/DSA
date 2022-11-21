string ReverseSort(string str){
    string ans="";
    int freq[26]={0};
    int n=str.length();
    for(int i=0;i<n;i++)
    freq[str[i]-'a']++;
    for(int i=25;i>=0;i--)
    {
        while(freq[i]!=0)
        {
            ans+=(char)(i+97);
            freq[i]--;
        }
    }
    return ans;
}
