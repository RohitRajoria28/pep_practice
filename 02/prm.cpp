#include <iostream>
using namespace std;

int primeCheck(int n)
{

    bool prime;

    for (int p = 2; p <= n; p++)
    {

        if (p % 2 != 0 && p % 3 != 0)
        {
            prime = true;
        }
        else

        {
            prime = false;
        }
        if (p == 2 || p == 3)
        {
            prime = true;
        }

        if (prime == true)
        {

            cout << p << endl;
        }
    }
}

int main()
{
    int n;
    cin >> n;

    primeCheck(n);
}