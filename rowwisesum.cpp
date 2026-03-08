#include<iostream>
using namespace std;


void rowsum(int brr[][3], int row,int column)
{
  int sum=0;
  for(int i=0;i<row;i++)
    {
        sum=0;
        for(int j=0;j<column;j++)
        {
            sum=sum+brr[i][j];

        }
        cout<<"sum of row "<<i<<" = "<<sum<<endl;
    }  
}


int main()
{
    int r=4,c=3;
    // cout<<"Enter the number of rows: "<<endl;
    // cin>>r;
    // cout<<"Enter the number of columns: "<<endl;
    // cin>>c;
    int arr[4][3];
    cout<<"Enter values of array: "<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];

        }
    }
    rowsum(arr ,r,c);
    return 0;
}