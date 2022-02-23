#include <iostream>
#include<unordered_map>
using namespace std;
int main()
{
    int  str[26]={0};
     string n;
     cin>>n;
     int i;
     for(i=0;i<n.length();i++)
     {
         str[n[i]-'a']++;
     }
     unordered_map<char,int>k;
     for(i=0;i<n.length();i++)
     {
         if(k.find(n[i])==k.end())
         {
             k.insert({n[i],str[-n[i]-'a']});
             cout<<n[i]<<str[n[i]-'a'];
         }
         
         
     }
}
