#include<iostream>
#include<vector>
using namespace std;
void substring(vector<int>&arr)
{
    for (int i=0;i<arr.size();i++)
    {
        for (int j=i; j<arr.size();j++)
        {
            for (int k=i; k<=j; k++)
            {
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }
}

int main()
{
    vector<int> arr={1,2,3,4,5,6,7,8};
    substring(arr);
}

