
/* The function returns 1 if
IP string is valid else return 0
You are required to complete this method */
class Solution {
    public:
        int isValid(string s) {
            
            int octate = 0;
            string digit = "";
            for(int i=0;i<s.length();i++)
            {
                if(s[i] == '.')
                {
                    // cout<<digit<<" ";
                    if(digit.length() == 0) return false;
                    if(digit[0] == '0' && digit.length() > 1) return false;
                    
                    int d = stoi(digit);
                    if(d > 255) return false;
                    
                    digit = "";
                    octate++;
                }
                else
                {
                    if(isalpha(s[i])) return false;
                    digit += s[i];
                    if(octate == 3) octate = 4;
                }
            }
            
            if(digit.length() == 0) return false;
            if(digit[0] == '0' && digit.length() > 1) return false;
            int d = stoi(digit);
            if(d > 255) return false;
            if(octate != 4) return false;
            
            return true;
        }
};
