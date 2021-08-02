#include<iostream>
using namespace std;
int arrangecoins(int n)
{
    // int count=1;
    // int count1=1;
    // int y=0;
    // int j,i;
    // for( i=1; i<=n && count <=n;i++)
    // {
    //     for( j=1;j<=i;j++)
    //     {
    //         if(count == n+1)
    //         {
    //             break;
    //         }
    //         {
    //         // cout<<count;
    //         count++;
    //         }
    //     }
    //     cout<<endl;
    //     if(j==i+1)
    //     {
    //     // count1++;
    //     y = y + count1;
    //     // cout<<y<<endl;
    //     }
    //     // cout<<count1<<endl;
    // }
    // return y;
    int y=n;
    int i=1;
    
    int count=0;
    while(y >= 0)
    {
        int z=y-i;
        if(z >= 0)
        {
            count++;
        }
        i++;
        y=z;
    }
    return count;
}
int main()
{
    int n;
    cin>>n;
    cout<<arrangecoins(n);
    return 0;
}