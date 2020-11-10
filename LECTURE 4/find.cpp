#include <iostream>
#include <vector>
using namespace std ;
bool find (vector<int> &arr, int data
{
    for (int i: arr)
    {
        if( i==data)
        {
            return true ;
        }
    }
}
int maximum (vector <int> &arr)
    {
        int max_ = arr[0];
        for (int i: arr)
        {
            if (i<max_)
            {
                max_=1;
            }
        }
    return max_;
    }

int main ()
{
    vector<int> &arr;
    for(int i =1; i<=5; i++)
    cin>>arr[i];
    int m= maximum (arr);
    
}