#include <iostream>
using namespace std;

int main()
{

    int x;
    int n;
    int r = 1;
    int i = 1;

    cin >> x >> n;

    while (i <= n)
    {

        int r = r * x;

        i = i + 1;
    }

    cout << r;
}