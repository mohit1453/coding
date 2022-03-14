#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
   int c=0;
   for(int i=5;i<=n;i=i*5)
   {
       c=c+ n/i;
   }
   cout<<c;
}
