#include <iostream>
using namespace std;
int main (int args, char** argv){
    int a,b,c;
    cout<< "enter a"<<endl;
    cin>> a;

    cout<< "enter b"<<endl;
    cin>> b;

    cout<<"enter c"<<endl;
    cin>> c;

    if(a>b && a>c)
    cout<<"largest is a :"<<a<<endl;
    else if(b>a && b>c)
    cout<<"largest is b:"<<b<<endl;

    else if(c>a && c>b)
    cout<<"largest is c:"<<c<<endl;
    
    }


    