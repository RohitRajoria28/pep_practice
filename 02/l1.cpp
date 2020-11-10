#include <iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;

    int a = 0, b = 1, c = a + b;

    for (int i = 0; i <= n; i++)
    {

        int a = b;
        int b = c;
        int c = a + b;
        if (i == n)
        {
            cout << c;
        }
    }
}