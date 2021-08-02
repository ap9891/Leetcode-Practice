class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        int n = T.size();
        stack<pair<int,int>> s;
        vector<int> ans (n,0);
        for(int i = 0; i < n -1 ; i++)
        {
            if(T[i] < T[i+1])
            {
                ans[i]=1;
                while(!s.empty() && s.top().first < T[i+1])
                {
                    ans[s.top().second] = (i+1) - s.top().second;
                s.pop();
                }
            }
            else
            {
                s.push(make_pair(T[i],i));
            }
        }
        return ans;
    }
};