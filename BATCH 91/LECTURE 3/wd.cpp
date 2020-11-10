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
    }
    
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
void wavedisplay(vector<vector<int>> &arr)
{
    for(int r=0 ;r<arr.size()r++)

    {
        if (r%2=0)
        {
            for(int c=0; c<arr.size();c++)
            {
                cout<<arr[r][c];
            }
        }
        else
        {
           for(int c=arr.size()-1;c>=0;c--)
           {
               cout<<arr[r][c]<<" ";
           }
        }
    }
}
int main()
{
    int n=3;
    int m=3;
    vector<vector<int>>arr(n,vector<int>(m,0));

    input(arr);
    wavedisplay(arr);
}