#include <iostream>
using namespace std;

int ndigit(int n)
{
    
    int count=0;
    while(n!=0)
    {
        n/=10;
        count++;
    }

 return count;
}

int rotate(int n, int r)
{
    int mult=1;
    int div=1;
    int digit=ndigit(n);
    r%=digit;

        r=r<0?r+digit:r;
    

    for(int i=1; i<=digit;i++)
    if(i<=r)
    {
        mult*=10;
    }
    else
    {
        div*=10;
    }
    int rem=n%10;
    n=n/div;


    return rem*mult+n;



    
}
int main()
{
    int n,r;
    cout<<"Enter the number";
    cin>>n;
    cout<<"enter the rotation";
    cin>>r;
    rotate(n,r);
    
}



