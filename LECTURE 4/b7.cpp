#include <iostream>
using namespace std;
int binary(int arr[],int size, int data )
{
    int start=0;
    int end= size-1 ;
    int mid= start+ end/2 ;

    if (arr[mid]==data)
    {
        mid;
    }
    else if(arr[mid]>data)
    {
        end=mid-1 ;
    }
    else(arr[mid]<data)
    {
        start=mid+1;
    }

    return -1 ;
}
int main()
{
    int arr[]={2,3,4,5,6,7,8,8,9};
    int data;
    cout<< "enter the data to be find ";
    cin>>data;
    int size=sizeof(arr)/sizeof(int);
    cout<<binary(arr, data,size);
}