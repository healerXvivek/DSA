#include <iostream>
using namespace std;

int power (int x,int n){
    if(n==0)
    return 1;
    int s=power(x,n-1);
    return x*s;
}
int main()
{
    int x,n;
    cout<<"enter no and then its power"<<endl;
    cin>>x>>n;
    cout<<power(x,n);
}

