#include<iostream>
using namespace std;

void diamond(int n)
{
    int nst=1;
    int nsp=n/2;

    for(int r=1; r<=n; r++)
    {
        for(int csp=1;csp<=nsp; csp++)
        {
            cout<<" ";
        }
        for(int cst=1; cst<=nst; cst++)
        {
            cout<<"*"<<" ";
        }

        if(r<=n/2)
        {
            nsp--;
            nst+=2;
        }
        else
        {
            nst-=2;
            nsp++;
        }
        cout<<endl;
    }

}
int main()
{
    int n;
    cout<<"enter no. of rows";
    cin>>n;

    diamond(n);

}