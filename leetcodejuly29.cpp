class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<pair<int,int>> dp(n);
        if( n ==0 || n==1)
        {
            return 0;
        }
        dp[0].first = 0;
        dp[0].second = -prices[0];    
        dp[1].first = max(dp[0].first,dp[0].second + prices[1]);
        dp[1].second = max(dp[0].second,dp[0].first-prices[1]);
        for(int i =2 ; i < n ; i++)
        {
            dp[i].first=max(dp[i-1].second+prices[i],dp[i-1].first);
            dp[i].second= max(dp[i-2].first-prices[i],dp[i-1].second);
        }
        return dp[n-1].first;
    }
};
