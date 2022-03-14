#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
   int s=1;
   for(int i=2;i<=n;i++)
   {
       s=s*i;
   }int c=0;
   while(s%10==0)
   {
       c++;
       s=s/10;
   }
   cout<<c;
}
