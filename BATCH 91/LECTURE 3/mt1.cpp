#include<iostream>
#include<vector>
using namespace std;

void input(vector<vector<int>>& arr)
{
    for(int r=0;r<arr.size();r++)
    {
        for(int c=0;c<arr[0].size();c++)
        {
            cin>>arr[r][c];
        }
    }-
    
}
void display(vector<vector<int>>& arr)
{
     for(int r=0;r<arr.size();r++)
    {
        for(int c=0;c<arr[0].size();c++)
        {
        cout<<arr[r][c]<<" ";
        }
        cout<<endl;
        
    }
    
}
void addmatrix(vector<vector<int>>& arr,vector<vector<int>>& arr1)
 {
     for(int r=0; r<arr.size();r++)
     {
         for(int c=0; c<arr[0].size();c++)
         {
             arr[r][c]+=arr1[r][c];
         }
         
     }

 }



int main()
{
    int n=3;
    int m=3;
    
    vector<vector<int>>arr(n,vector<int>(m,0));
    vector<vector<int>>arr1(n,vector<int>(m,0));

    

    input(arr);
    input(arr1);
    // display(arr);
    addmatrix(arr,arr1);
    display(arr);
    return 0;

    

}