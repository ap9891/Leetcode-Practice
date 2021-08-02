class Solution {
public:
    int numSub(string s) {
        int n = s.length();
        // long tot=0;
        int dp[n];
        if(s[0]=='0')
        {
            dp[0]=0;
        }
        else
        {
            dp[0]=1;
        }
        long tot=dp[0];
        for(int i=1; i <n ;i++)
        {
            if(s[i] == '1')
            {
                dp[i] = 1+dp[i-1];
            }
            else
            {
                dp[i]=0;
            }
            tot += dp[i];
        }
        return tot%1000000007;
    }
};