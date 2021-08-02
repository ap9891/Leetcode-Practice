class Solution {
public:
    int countSubstrings(string s) {
        int ans=0;
        int n = s.length();
        bool dp[1001][1001] = {0};
        for(int i = 0 ; i < n ; i++)
        {
            dp[i][i] = true;
        }
        for(int i = 0 ; i  <n ; i ++)
        {
            if(s[i] == s[i+1])
            {
                dp[i][i+1] =true;
            }
        }
        for(int d = 2 ; d < n; d++)
        {
            int i =0 , j =d;
            while(j < n)
            {
                if(s[i]==s[j] && dp[i+1][j-1])
                {
                    dp[i][j] = true;
                }
                j++;
                i++;
            }
        }
        for(int i=0;i < n ;i ++)
        {
            for(int j=0; j < n ;j++)
            {
                if(dp[i][j])
                {
                    ans++;
                }
            }
        }
        return ans;
    }
};