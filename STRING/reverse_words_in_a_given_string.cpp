class Solution
{
    public:
    string reverseWords(string s) 
    { 
    string str="";
    stack<string> stk;
    string temp="";
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!='.')
        temp+=s[i];
        else
        {
        stk.push(temp);
        temp="";
        }
    }
    stk.push(temp);
    while(stk.empty()==false)
    {
        if (stk.size()==1)
        str+=stk.top();
        else
        {
        str+=stk.top();
        str+=".";
        }
        stk.pop();
    } 
    return str;
    } 
};
