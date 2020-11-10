#include<iostream>
using namespace std;
int main()
{
     int n;
     cout<< "enter the number";
     cin>>n;
     int ans=0;
     while(n!=0)
     {
         int rem=n%10;
         n/=10;
         ans=ans*10+rem;
     }
     cout<<ans<<endl;

}