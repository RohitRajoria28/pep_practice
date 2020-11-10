#include<iostream>
#include<vector>
using namespace std;

void exitpoint(arr)
{
    int dir=0;
    int r=0;
    int c=0;

    while(true)
    {
        dir=(dir+arr[r][c])%4;
        if(dir==0)
        {
            c++;
          if (c==arr[0].size())
        {
            cout<<r<<c--;
            break;
        }

        }
        else if(dir=1)
        {
            r++;
            if(r==arr.size)
            {
                cout<<r--<<c;
            }


        }
        else if(dir=2)
        {
            c--;
            if(c==-1)
            {
                cout<<c++<<r;
            }

        }
        else if (dir=3)
        {
            r--;
            if(r=-1)
            {
                cout<<r++<<c;
            }

        }
    }
}
int main()
{
    int arr={{0,0,0,0,1},{1,0,0,1,0},{0,0,0,0,0},{0,0,0,1,0},{1,0,0,0,1}};
    exitpoint(arr);
}
