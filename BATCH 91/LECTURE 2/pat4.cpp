#include<iostream>
using namespace std;

void numdiamond(int n)
{
     int nst=1;
    int nsp=n-1;
    for(int r=1; r<=n; r++)
    {
        for(int csp=1; csp<=nsp; csp++)
        {
            cout<<" ";
        }
        int val=r;
        if(r>n/2+1)
        val=n-r+1;
        for(int cst=1;cst<=nst; cst++)
        {
            cout<<val;
            if(cst<=nst/2)
            {
                val++;
            }
            else
            {
                val--;
            }

            

        }
        if(r<=n/2)
        {
            nst+=2;
            nsp--;
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
    cout<<"enter the no. of rows";
    cin>>n;

    numdiamond(n);
}
   
   