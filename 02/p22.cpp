#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {

        for (int k = 1; k <= n - i + 1; k++)
        {
            int p = n - i + 1;

            cout << p;
        }

        // for (int j = 1; j <= i - 1; j++)
        // {
        //     cout << " ";
        // }

        cout << endl;
    }
}