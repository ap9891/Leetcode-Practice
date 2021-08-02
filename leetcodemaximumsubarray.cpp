class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cs=0,ms=INT_MIN;
        
        int count=0;
        for(int i=0; i <nums.size();i++)
        {
            if(nums[i] < 0)
            {
                count++;
            }
        }
        if(count == nums.size())
        {
            for(int i=0; i < nums.size(); i++)
            {
                cs=nums[i];
                ms = max(ms,cs);
            }

        }
        else
        {
            for(int i=0; i < nums.size(); i++)
        {
            cs=cs+nums[i];
            if(cs<0)
            {
                cs=0;
            }
            ms = max(ms,cs);
        }
        }
      
        return ms;
    }
};