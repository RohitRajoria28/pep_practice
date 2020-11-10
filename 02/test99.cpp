#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    char ch;
    ch = cin.get();

    int cr = 0, space = 0, num = 0;

    while (ch != '$')
    {
        if (ch >= 'a' || ch <= 'z')
        {
            cr++;
        }
        else if (ch >= 0 || ch <= 9)
        {
            num++;
        }
        else if (ch == ' ' || ch == '\t' || ch == '\n')
        {
            space++;
        }
        cin.get();
    }

    cout << cr << " " << space << " " << num << " ";
}