#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> input(vector<vector<int>> &arr,int n,int m)
{
    for(int row=0;row<n;row++)
    {
        for(int col=0; col<m;col++)
        {
            cout<<"enter the"<< row<<"th and"<<col<<"th value";
            cin>>arr[row][col];
            
        }
    }
    return arr;
}

void output(vector<vector<int>> &arr)
{
    for(vector<int> ar:arr)
    {
        for(int i: ar)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    
    int m,n;
    cout<<"enter the number of rows";
    cin>>n;
    cout<<"enter the number of cols";
    cin>>m;
    vector<vector<int>> arr(n,vector<int>(m,0));
    vector<vector<int>> filled_array = input(arr,n,m);
    output(filled_array);
}