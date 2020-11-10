#include <iostream>
using namespace std;
int mian()
{
    int n;
    cin>>n;
     int nsp=n-1;
    int  nst=1;
     for(int r=1 ;r<=n; r++)
     {
         for(int csp=1;csp<=nsp; csp++ )
         {
             cout<<" ";

         }
         for(int cst=1;cst<=nst;cst++)
         {
             cout<<"*"
         }

         nsp--;
         nst++;
     }
}