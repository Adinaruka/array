#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cout<<"enter the no of rows"<<endl;
    cin>>n;
    cout<<"enter the no of column"<<endl;
    cin>>m;
    int arr[n][m];
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    int max = INT32_MIN;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(max<=arr[i][j])
            {
                max=arr[i][j];
            }

        }
        
    }
    cout<<max;
}