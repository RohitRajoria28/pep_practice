#include <iostream>
using namespace std;
int main()
{
    int a=10;
    int b=20;
    cout << "VALUE of a NOW"<<a<<endl;
    cin>>a;
    cout << "value of b  "<<b<< endl;
    cin>>b;


    swap(a,b);
    cout << "VALUE of a then"<<a<<endl;
    cin>>a;
    cout << "value of b then "<< b<< endl;
    cin>>b;
    

    return 0 ;
    
}