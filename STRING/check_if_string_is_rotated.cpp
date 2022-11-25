class Solution
{
    public:
    bool isRotated(string a, string b)
    {
        
    int n1=a.length();
    int n2=b.length();
    if(n1!=n2)
    return false;
    bool left=true,right=true;
    for(int i=0;i<n1;i++)
    {
    if(b[i]!=a[(i+2)%n1])
    {
        left=false;
        break;
    }
    }
    for(int i=0;i<n1;i++)
    {
     if(b[i]!=a[(i+n1-2)%n1])
    {
        right=false;
        break;
    }
    }
    if(right||left)
    return true;
    return false;
}
};

