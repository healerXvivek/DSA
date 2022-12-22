class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool match(char a, char b)
    {
        return(a=='(' && b==')' ||a=='{' && b=='}' ||a=='[' && b==']');
    }
    
    bool ispar(string x)
    {
        if(x.length()==0)
        return false;
        stack<char> s;
        for(auto ch : x){
            if(ch=='{' || ch=='(' || ch=='[')
            s.push(ch);
            else{
                if(s.empty()==true)
                return false;
                else if(match(s.top(),ch)==false)
                return false;
                else
                s.pop();
            }
        }
        return (s.empty()==true);
    }

};
