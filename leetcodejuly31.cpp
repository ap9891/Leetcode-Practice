
class Solution {
public:
    int climbStairs(int n) {
    int dp[n+1];
        dp[0]=1;
        for(int i=1 ;i <=n; i++)
        {
            int sum=0;
            for(int j=1; j <=2 ;j++)
            {
                if((i-j >= 0))
                {
                sum += dp[i-j];
                }
            }
            dp[i] = sum;
        }
        return dp[n];
    }
};