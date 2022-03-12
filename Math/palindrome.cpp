#include<iostream>
using namespace std;
bool isPalindrome(int n)
{
    int k=n;
    int rev=0;
    while(k!=0)
    {
    int rem=k%10;
    rev=rev*10+rem;
    k=k/10;
    }
    return (n==rev);
}
int main()
{
    int n;
    cin>>n;
    cout<<isPalindrome(n);
}
