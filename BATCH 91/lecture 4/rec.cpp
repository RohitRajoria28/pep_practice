#include<iostream>
using namespace std;

void printIncr(int st, int end)

{
    if (st=end+1) return;
    
        cout<<st<<" ";
        printIncr(st+1, end);
    
}

void printdecr(int st,int end)
{
    if (st=end+1) return;

    printdecr( st+1, end);
    cout<<st<<" ";
}



int main( int args, char** argv)
{
    int st,end;
    cin>>st>>end;
    printIncr(st,end);
}