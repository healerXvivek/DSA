//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
char* reverse(char *str, int len);
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        char str[10000];
        cin>>str;
        long long int len=strlen(str);
        char *ch=reverse(str,len);
        for(int i=0;i<len;i++)
        {
            cout<<ch[i];
        }
        cout<<endl;
    }
        return 0;
}


// } Driver Code Ends


//return the address of the string
char* reverse(char *s, int len)
{
    stack<char> st;
    for(int i=0;i<len;i++){
        st.push(s[i]);
    }
    char* ans = new char[len];
    for(int i=0;i<len;i++){
        ans[i]=st.top();
        st.pop();
    }
    return ans;
}
