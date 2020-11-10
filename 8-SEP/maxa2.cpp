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

int max(vector<vector<int>> arr)
{
    int max=arr[0][0];
    for(vector<int> ar:arr)
    {
        for(int i: ar)
        {
            if(i>max)
            {
                max=i;
            }
        }
    }
    return max;
}
int main()
{
    vector<vector<int>> arr1=input();
    
    int ans= max(arr1);
    cout<<ans;
}