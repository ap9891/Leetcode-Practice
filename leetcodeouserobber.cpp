class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n);
        // int dp[n];
        if(n==0)
        {
            return 0;
        }
        if(n==1)
        {
            return nums[0];
        }
        dp[0] = nums[0];
        dp[1] = max(dp[0],nums[1]);
            for(int i=1; i <n ;i++)
            {
                if((i-2)>=0)
                {
                dp[i] = max(dp[i-1],nums[i] + dp[i-2]);
                }
            }
        return dp[n-1];
    }
};