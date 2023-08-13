#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter no of rows/column"<<endl;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        cin>>a[i][j];
    }
    int t[n][n];
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
           t[j][(n-1)-i]=a[i][j];
        }
}
}
