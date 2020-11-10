#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"enter the num";
    cin>>num;
    int count=0;
    while(num!=0)
    {
       
       num=num/10 ;
         count++;
        
    }
    cout<<endl;
    cout<<count;

    
}