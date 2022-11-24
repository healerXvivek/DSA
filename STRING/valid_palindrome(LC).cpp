class Solution {
public:

    bool check(char a)
{
    if((a>='a' && a<='z') || (a>='A' && a<='Z') || (a>='0') && (a<='9'))
    {
        return true;
    }
    return false;
}

    bool isPalindrome(string s) {
    int len = s.size();
    int a = 0;
    int b = len-1;
    while(a<b)
    {
        while(!check(s[a]) && a<b)
        {
            a++;
        }
        while(!check(s[b]) && a<b)
        {
            b--;
        }
        if(tolower(s[a])!=tolower(s[b]))
        {
            return false;
        }
        a++;
        b--;
    }
    return true;
    }
};  
