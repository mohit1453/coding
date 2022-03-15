#include <iostream>
bool checkPrime(int n)
{
   int i;
    if(n==1)
    return false;
    if(n==2||n==3)
    return true;
    if(n%2==0||n%3==0)
    return false;
    for(i=5;i*i<=n;i=i+5)
    {
        if(n%i==0||n%(i+2)==0)
        return false;
    }
    return true;
}

using namespace std;

int main()
{
    int n;
    cin>>n;
    cout<<checkPrime(n);
    return 0;
}
