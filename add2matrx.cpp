#include<iostream>
using namespace std;

int main()
{
    
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int brr[3][3]={{10,11,12},{15,16,17},{1,2,3}};
    int res[3][3];


    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           res[i][j]=arr[i][j]+brr[i][j];
        }
        cout<<endl;
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}
