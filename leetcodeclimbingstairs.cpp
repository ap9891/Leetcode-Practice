// #include<iostream>
// using namespace std;
// int topdown(int n)
// {
//     if(n==0)
//     {
//         return 1;
//     }
//     if(n<0)
//     {
//         return 0;
//     }
//     int sum =0;
//     for (int i = 1; i <=2; i++)
//     {
//         sum += topdown(n-i);
//     }
//     return sum;
// }
// int bottomup(int n)
// {
//     int dp[n+1];
//     dp[0]=1;
//     for (int i = 1; i <= n; i++)
//     {
//         int sum=0;
//         for (int k = 1; k <=2; k++)
//         {
//             if((i-k)>=0)
//             {
//                 sum += dp[i-k]; 
//             }
//         }
//         dp[i]=sum;
//     }
//     return dp[n];
// }
// int main()
// {
//     int n;
//     cin>>n;
//     cout<<topdown(n)<<endl;
//     cout<<bottomup(n);
//     return 0;
// }

////////////////leetcode

// class Solution {
// public:
//     int climbStairs(int n) {
//     int dp[n+1];
//         dp[0]=1;
//         for(int i=1 ;i <=n; i++)
//         {
//             int sum=0;
//             for(int j=1; j <=2 ;j++)
//             {
//                 if((i-j >= 0))
//                 {
//                 sum += dp[i-j];
//                 }
//             }
//             dp[i] = sum;
//         }
//         return dp[n];
//     }
// };