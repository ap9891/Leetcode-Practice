#include<iostream>
using namespace std;
int islandPerimeter(int grid[100][100],int n, int m) 
{
    int count=0;
    int c1=0,c2=0,c3=0,c4=0;
    for(int i=0 ;i < n ;i++)
    {
        for(int j =0 ; j < m ;j++)
        {
            if(grid[i][j]==1)
            {
                if(grid[i-1][j]==0 || i-1 < 0)
                {
                    count++;
                    c1++;
                    cout<<c1<<" ";
                }
                if(grid[i][j-1]==0 || j-1 < 0 )
                {
                    count++;
                    c2++;
                    cout<<c2<<" ";
                }
                if(grid[i+1][j]==0 || i+1 >= n)
                {
                    count++;
                    c3++;
                    // cout<<c3<<" ";
                }
                if(grid[i][j+1]==0 || j+1 >= m)
                {
                    count++;
                    c4++;
                    // cout<<c4<<" ";
                }
            }
        }
    }
    return count;
}
int main()
{
    int arr[100][100];
    int n,m;
    cin>>n>>m;
    for(int i =0 ; i < n; i++)
    {
        for(int j=0 ;j < m;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<islandPerimeter(arr,n,m);
    return 0;
}