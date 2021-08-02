// class Solution {
// public:
//     vector<vector<int>> generateMatrix(int n) {
//         vector<vector<int>> v(n, vector<int> (n));
//          int count=1;
//     int sr=0,er=n-1,sc=0,ec=n-1;
//     while(sc <= ec && sr <= er)
//     {
//         for(int j=sc; j<= ec ;j++)
//         {
//             v[sr][j] = count;
//             count++;
//         }
//         sr++;
//         for(int i= sr; i<= er; i++)
//         {
//             v[i][ec] = count;
//             count++;
//         }
//         ec--;
//         if(sr <=  er)
//         {
//             for(int j=ec ; j >= sc ;j--)
//             {
//                 v[er][j] = count;
//                 count++;
//             }
//             er--;
//         }
//         if(sc <= ec)
//         {
//             for(int i = er; i >= sr ;i--)
//             {
//                 v[i][sc] = count;
//                 count++;
//             }
//             sc++;
//         }
//     }
//     for(int l=0;l<n;l++)
//     {
//         for(int k=0; k<n;k++)
//         {
//             cout<<v[l][k]<<" ";
//         }
//         cout<<endl;
//     }
        
//         return v;
//     }
// };
// #include<iostream>
// using namespace std;
// int main()
// {
//     int t,a,b;
//     cin>>t;
//     while(t--)
//     {
//         cin>>a>>b;
//         int ta = 2*a*b;
//         int i=0;
//         while(i <= ta)
//         {
//             if(i*i >= ta)
//             {
//                 cout<<i<<" ";
//                 break;
//             }
//             cout<<i<<endl;
//             i++;
//         }
//         cout<<i*i<<endl;
//     }
//     return 0;
// }
#include<iostream>
#include<algorithm>
using namespace std;
int diff[100001];
int k=0;
int main()
{
    int n,arr[100001];
    int t;
    cin>>t;
    while(t--)
    {
            cin>>n;
    for(int i =0 ;i < n ;i++)
    {
        cin>>arr[i];
    }
    for(int i=0 ;i <n ;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            diff[k] = abs(arr[i]-arr[j]);
            k++;
        }
    }
    sort(diff,diff+k);
    cout<<diff[0]<<endl;
    }
}