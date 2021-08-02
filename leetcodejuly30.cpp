class Solution {
public:
    unordered_map<string,vector<string>> dp;
    vector<string> help(string s, vector<string> & wordDict)
    {
        if(s.empty())
        {
            return {""};
        }
        if(dp.find(s) != dp.end())
        {
            return dp[s];
        }
        vector<string> subpart,wholepart;
        for(auto word : wordDict)
        {
            string match = s.substr(0,word.length());
            if(match != word)
            {
                continue;
            }
            else
            {
                subpart = help(s.substr(word.length()),wordDict);
            }
        
        for(auto ans : subpart)
        {
            string space =  (ans.length()==0)? "" : " ";
            wholepart.push_back(word+space+ans);
                
        }
        }
            return dp[s] = wholepart;
        
    }
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        dp.clear();
         return help(s,wordDict);
        
    }
};