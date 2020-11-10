#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> input()
{
    int n,m;
    cout<<"enter the no. of row";
    cin>>n;
    cout<<"enter the no. of col.";
    cin>>m;
    vector<vector<int>> arr(n, vector<int>(m,0));
    for(int row=0;row<n;row++)
    {
        for(int col=0; col<m; col++)
        {
            cout<<"enter the"<<row<<"and"<<col;
            cin>>arr[row][col];
        }
    }
    return arr;
}

bool find(vector<vector<int>>&arr, int data)
{
    for (vector<int> ar:arr)
    {
        for(int i: ar)
        {
            if(i==data )
            {
                return true;
            }
        }
    }
    return false;

}
int main()
{
    int data;
    cout<<"Enter the data";
    cin>>data;
    vector<vector<int>> arr1=input();
    bool ans= find(arr1,data);
    cout<<ans;
}