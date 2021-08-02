#include<iostream>
using namespace std;
int minclost(int *arr, int n)
{
    int  dp[100]={0};
    int i;

    dp[0]=arr[0];
    dp[1]=arr[1];
    for (i=2; i < n; i++)
    {
        dp[i] = arr[i]+ min(dp[i-1],dp[i-2]);
    }
   
return min(dp[n-1],dp[n-2]);
    
}
int main()
{
    int n;
    cin>>n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<minclost(arr,n);
}
// class Solution {
// public:
//     int minCostClimbingStairs(vector<int>& cost) {
//         vector<int> dp(cost);
//         dp[0]=cost[0];
//         dp[1]=cost[1];
//         int i,n=cost.size();
//         for(i=2 ; i < n;i++)
//         {
//             dp[i] = cost[i] + min(dp[i-1],dp[i-2]);
//         }
//         return min(dp[n-1],dp[n-2]);
//     }
// };