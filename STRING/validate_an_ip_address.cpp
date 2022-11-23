/* The function returns 1 if
IP string is valid else return 0
You are required to complete this method */
class Solution {
    public:
        int isValid(string s) {
            s+='.';
            int count=0;
            string digit="";
            for(int i=0;i<s.length();i++)
            {
                if(s[i]=='.')
                {
                if(digit.length() == 0) 
                return 0;
                if(digit[0] == '0' && digit.length() > 1) 
                return 0;
                int d=stoi(digit); //convert string to int 
                if(d>255)
                return 0;
                count++;
                if(count<4) //so that we will have last digit in string digit
                digit=""; 
                }
                if(s[i]>='0' && s[i]<='9')
                {
                    digit+=s[i];
                }
            }
            if(count==4 && digit.length()>0) //if there are alphabets or other special characters in string s then length of digit will be zero 
            return 1;
            return 0;
        }
};
