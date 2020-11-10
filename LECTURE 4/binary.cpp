#include <iostream>
using namespace std;

int binarys( int arr[], int data ,int size)
{
    int start = 0;
    int end = size-1;
    
    // loop
    while(start <= end)
    {
        //
        int mid = (end +start)/2;
        if(arr[mid] == data)
        {
            return mid;
        }
        else if(arr[mid] < data)
        {
            start = mid+1;

        }
        else
        {
            end = mid -1;
        }
    }
    return -1;
}
int main ()
{
    int arr[] = {1,2,4,5,7,8,8,9,12};
    int size = sizeof(arr)/sizeof(int);
    int data;
    cout<<"enter the data to be find"<<endl;
    cin>>data;
    cout<<binarys(arr,data,size);
    // cout<<ans;
}



