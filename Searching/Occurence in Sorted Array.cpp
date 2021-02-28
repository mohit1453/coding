#include <iostream>

using namespace std;
int firstocc(int a[],int n,int x)
{
    int low=0,high=n-1;
    while(low<=high)
    {
      int  mid=(low+high)/2;
        if(a[mid]>x)
        high=mid-1;
        else
        if(a[mid]<x)
        low=mid+1;
        else
        if(mid==0||a[mid-1]!=a[mid])
        return mid;
        else
        high=mid-1;
    }
    return -1;
}
int lastocc(int a[],int n,int x)
{
    int low=0,high=n-1;
    while(low<=high)
    {
       int  mid=(low+high)/2;
        if(a[mid]>x)
        high=mid-1;
        else
        if(a[mid]<x)
        low=mid+1;
        else
        if(mid==n-1||a[mid+1]!=a[mid])
        return mid;
        else
        low=mid+1;
    }
    return -1;
}
int main()
{
    int n,i,a[1000],k;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>k;
    int first=firstocc(a,n,k);
    if(first==-1)
    cout<<"0";
    else
    cout<<lastocc(a,n,k)-first+1;
   return 0;
}
