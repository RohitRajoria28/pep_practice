#include <iostream>
using namespace std ;

int binarys(int arr[], int data,int size)
{
     int start =0;
     int end =size -1 ;


     
     while(start <= end )
     {
         int mid = (start+ end)/2 ;
         if(arr[mid]== data )
         {
             return mid;
         }
         else if (arr[mid]<data)
         {
             start=mid+1;
         }
         else (arr[mid]> data)
         {
             end =mid-1;

         }
         
         
         
     }
     return -1;
     
 }

 int main ()
 {
     int arr[]={1,2,4,5,7,9};
     int size = sizeof(arr)/sizeof(int);
     int data;
     cout<< "enter the data to be find"<< endl;
     cin>>data;
     cout<< binarys(arr, data,size);
 }