#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cout<<"rows";
    cin>>n;
    cout<<"column";
    cin>>m;
    int arr[n][m];
    int trr[m][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    // transpose
    for (int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
        trr[i][j]=arr[j][i];
    }
    }
    for (int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
        cout<<trr[i][j]<<" ";
    }
    cout<<endl;
    }


}