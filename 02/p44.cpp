#include <iostream>
using namespace std;

int main()
{

    int n;
    int m;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int p = 1; p <= n - i; p++)
        {
            cout << " ";
        }

        for (int k = 0; k < i; k++)
        {
            cout << k + i;

            m = k + i;
        }
        for (int h = 1; h <= i - 1; h++)
        {

            cout << m - 1;
            m = m - 1;
        }

        cout << endl;
    }
}