#include <iostream>
#include<vector>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    vector<bool>a(n+1,true);
    for(i=2;i*i<=n;i++)
    {
        if(a[i])
        {
            for(j=i*i;j<=n;j=j+i)
            {
                a[j]=false;
            }
        }
    }
    for(i=2;i<n;i++)
    {
        if(a[i]==true)
        cout<<i<<" ";
    }

return 0;
}
