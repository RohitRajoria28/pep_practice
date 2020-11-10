#include <iostream>
using namespace std;

int main()
{

    int n;

    cin >> n;

    int sume;
    int sumo;

    
     

        while (n >= 0)
        {

            int x=n%10;

            if (x % 2 == 0)
            {
                sume = sume + x;
            }
            else  if (x % 3 == 0/* condition */)
            {
                /* code */sumo = sumo + x;
            }
            
            n=n/10;
        }
     
    
    cout << "SUM OF ODD =" << sumo << endl;
    cout << "SUM OF even =" << sume << endl;
}