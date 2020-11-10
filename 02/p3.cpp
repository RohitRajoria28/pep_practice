#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    char val = 'A';

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            char p = val;

            cout << char(p + i - 1);

            val = val + 1;
        }
        val = val - 2;

        cout << endl;
    }
}