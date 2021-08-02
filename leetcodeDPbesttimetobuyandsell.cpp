class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        vector<int> dp(prices);
        int maximum=0;
        for(int i =1; i < prices.size() ; i++)
        {
            if(dp[i] > dp[i-1])
            {
                maximum = max(maximum,dp[i] - dp[i-1]);
            }
            dp[i] =  min(dp[i],dp[i-1]);
        }
        return maximum;
    }
};