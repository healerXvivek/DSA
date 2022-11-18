#include <iostream>
void reverse(int arr[],int n)
{
    int start=0,end=n-1;
    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main()
{
    int arr[]={1,2,3,4};
    int n=4;
    reverse(arr,n);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}
