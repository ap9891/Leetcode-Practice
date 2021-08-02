class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(),nums.end());
        for(int i = 1; i < nums.size() ; i++)
        {
                int result = nums[i]^nums[i-1];
                
                if( result == 0)
                {
                    ans.push_back(nums[i]);
                }
        }
        return ans;
    }
};