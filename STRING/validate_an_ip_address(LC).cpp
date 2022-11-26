class Solution {
public:
    bool ipv4(string s){
        int count=0;
        string digit="";
        for(int i=0;i<s.length();i++){
            if(s[i]=='.'){
                if(digit.length()==0)
                return false;
                if(digit[0]=='0' && digit.length()>1)
                return false;
                if(digit.length()>3)
                return false;
                int d=stoi(digit);
                if(d>255)
                return false;
                count++;
                digit="";
            }
            else{
                if(s[i]>='0' && s[i]<='9')
                digit+=s[i];
                else
                return false;
            }
        }
        if(count == 4)
        return true;
        else
        return false;
    }


    bool ipv6(string s){
        int count=0;
        string digit="";
        for(int i=0;i<s.length();i++){
            if(s[i]==':'){
                if(digit.length()==0)
                return false;
                if(digit.length()>4)
                return false;

                count++;
                digit="";
            }
            else{
                if((s[i]>='A' && s[i]<='F') || (s[i]>='a' && s[i]<='f') || (s[i]>='0' && s[i]<='9'))
                digit+=s[i];
                else
                return false;
            }
        }
        if(count==8)
        return true;
        else
        return false;
    }

    string validIPAddress(string queryIP) {
        int ans1=0,ans2=0;
        if(queryIP.find('.')!=string::npos){
           queryIP+='.';
           ans1=ipv4(queryIP);
        }   
        else{
            queryIP+=':';
            ans2=ipv6(queryIP);
        }
        if(ans1==1)
        return "IPv4";
        else if(ans2==1)
        return "IPv6";
        else
        return "Neither";
    }
};
