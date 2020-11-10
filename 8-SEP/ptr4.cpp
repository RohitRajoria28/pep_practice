#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> input()
{
    int n ,m;
    cout<<"Enter the number of rows";
    cin>>n;
    cout<<"Enter the number of col";
    cin>>m;
    vector<vector<int>> arr(n, vector<int>(m,0));
    for(int row=0; row<n; row++)
     {
        for(int col=0; col<m; col++)
        {
            cout<<"enter the"<<row<<"and"<<col;
            cin>>arr[row][col];
        }
    }
    return arr;
}

void rev(vector<vector<int>>& arr)
{
    for(int row=0;row<arr.size();row++)
    {
        if(row%2==0)
        {
        for(int col=0; col<arr[0].size(); col++)
        {
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
        }
        else {
            for(int col=arr[0].size()-1;col>=0; col--)
            {
                cout<<arr[row][col]<<" ";
            }
            cout<<endl;
        }
        
    }
    
}
int main(){
    vector<vector<int>> arr = input();
    rev(arr);                            
}