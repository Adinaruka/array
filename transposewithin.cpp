#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter row /column"<<endl;
    cin>>n;
    int a[n][n];
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    for (int i=1;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
           int temp=a[i][j];
           a[j][i]=a[i][j];
           a[j][i]=temp;

        }
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }

}