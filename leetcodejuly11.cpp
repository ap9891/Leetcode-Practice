class Solution {
public:
    vector<int>allsubset(int num,vector<int>&nums)
    {
        vector<int>subs;
        int j=0;
        while(num != 0)
        {
            if((num&1)==1)
            {
                subs.push_back(nums[j]);
            }
            j++;
            num>>=1;
        }
        return subs;
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        int n = nums.size();
        int total = 1<<n;
        for(int i =0 ; i < total ; i++)
        {
            ans.push_back(allsubset(i,nums));

        }
        return ans;
    }
};