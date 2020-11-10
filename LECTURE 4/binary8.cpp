#include <iostream>
using namespace std;

int  binarylb( int arr[],int data, int size)
{
    int start = 0;
    int end =size -1 ;
    
    int mid =(start + end)/2 ;

    while (start<= end )
    {
        if (int arr[mid]== data)
        {
            return mid ;
        }
        else if (int arr[mid]>data)
        {
            end =mid-1;
        }
        else 
        {
            start= mid+1
        }
    }
    return -1
}

int mian ()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int data;
    int size = sizeof(arr)/sizeof(int) ;
    cin>> data;
    cout<< "enter data to be find ";
    cin<<binarylb(arr,data,size);
}