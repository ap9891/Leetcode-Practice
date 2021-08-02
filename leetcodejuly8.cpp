class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& num) {
        sort(num.begin(),num.end());
        vector<vector<int>> ans;
        set<vector<int>>s1;
        int n = num.size();
        for(int i = 0 ;i < n -2 ;i++)
        {
            int val = num[i];
            int s = i+1;
            int e = n-1;
            while(s < e)
            {
                int sum = val + num[s] + num[e];
            if( sum == 0)
            {
                s1.insert({val,num[s++],num[e--]});

            }
            else if(sum < 0)
            {
                s++;
            }
            else 
            {
                e--;
            }
            }
        }
        for(auto x :s1)
        {
            ans.push_back(x);
        }
        return ans;
    }
};