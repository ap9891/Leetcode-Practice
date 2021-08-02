#include<iostream>
#include<string.h>
using namespace std;
int issubsequence(string a , string b)
{
    int len1=a.length();
    int len2=b.length();
    int dp[len1+1][len2+1];
    for (int i = 0; i <=len1; i++)
    {
        for (int j = 0; j <= len2; j++)
        {
            dp[i][j]=0;
        }
        
    }
    
    for (int i = 1; i <= len1; i++)
    {
        for (int j = 1; j <= len2; j++)
        {
            if(a[i-1] == b[j-1])
            {
                dp[i][j] = 1+dp[i-1][j-1];
            }
            else
            {
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
            
        }
        
    }
    // for (int i = 0; i <= len1; i++)
    // {
    //     for (int j = 0; j <= len2; j++)
    //     {
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    
    return dp[len1][len2];
    
}
int main()
{
    string a,b;
    cin>>a>>b;
    cout<<issubsequence(a,b);
    return 0;
}