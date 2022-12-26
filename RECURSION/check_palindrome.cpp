#include <iostream>
using namespace std;

bool check_palindrome(string s,int start,int end){
    if(start>=end)
    return true;
    return (s[start]==s[end] && check_palindrome(s,start+1,end-1));
}
int main()
{
    string s="abba";
    int l=s.length();
    cout<<check_palindrome(s,0,l-1)<<endl;
}

