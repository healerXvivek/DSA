class Solution{
  public:
    void f(int i,string &s,string p,vector<string>& ans,int d)

    {
        if(i>=s.size())
        {
            if(d==4)
            {
                p.pop_back();
                ans.push_back(p);
            }
            return;
        }
        int a=-1,b=-1,c=-1;
        if(i+1<=s.size())a=stoi(s.substr(i,1));
        if(i+2<=s.size())b=stoi(s.substr(i,2));
        if(i+3<=s.size())c=stoi(s.substr(i,3));
        if(a!=-1 && a>=0 && a<=9)
        {
            f(i+1,s,p+s[i]+'.',ans,d+1);
        }
        if(b!=-1 && s[i]!='0'&& b>=10 && b<=99)
        {
            f(i+2,s,p+s.substr(i,2)+'.',ans,d+1);
        }
        if(c!=-1 && s[i]!='0' && c>=100 && c<=255)
        {
            f(i+3,s,p+s.substr(i,3)+'.',ans,d+1);
        }
    }

    vector<string> genIp(string &s) {
        int n=s.size();
        vector<string> ans;
        if(n<4)return ans;
        f(0,s,"",ans,0);
        return ans;
    }
};
