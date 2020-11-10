#include <iostream>
using namespace std;


int binary(int arr[], int size, int data)
{
    int start =0;
    int end = size-1;
    
    while (start<=end)
    {
        int mid =start+end/2;
        if ( arr[mid]==data)
        {
            return mid ;
        }

        else if(arr[mid]< data)
        {
            start=mid+1;
        }

        else
        {
            end=mid -1;
        }    
    }
    return -1;
}

int main()
{
    int arr[]={10,20,30,40,50,60,70,80,80,90};
    int size =sizeof(arr)/sizeof(int);
    int data;
    cout<<"  enter the data to be found  "  <<data;
    cin>> data;
    cout<< binary(arr,data,size);
}
