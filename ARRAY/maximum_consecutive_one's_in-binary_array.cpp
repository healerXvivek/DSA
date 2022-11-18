#include <iostream>
#include <algorithm>
using namespace std;

void maximum1(int arr[],int n)
{
    int res=0;
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        count=0;
        else
        {
        count++;
        res=max(res,count);
        }
    }
    cout<<res;
}

int main()
{
  int a[]={0,1,1,1,1,1,1,0,1,1,1,0};
  int n=sizeof(a)/sizeof(a[0]);
  maximum1(a,n);
  
}

