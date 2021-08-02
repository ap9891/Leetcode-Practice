class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        //sort an array then compare;
        vector<int> ans = nums;
        sort(ans.begin(),ans.end());
        int n = nums.size();
        int start = 0,end = n;
        for(int i =0 ; i <n ;i ++)
        {
            //mark first position
            if(ans[i] !=  nums[i])
            {
                start = i;
                break;
            }
            //if the if cond is not satisfied
            start = 1;
        }
        for(int i = n-1; i>=0;i--)
        {
            if(ans[i] != nums[i])
            {
                end = i;
                break;
            }
            //if the if cond is not satisfied
            end=0;
        }
        //finding length if array was already sorted the length will be zero
        int length = end - start +1;
        return length;
    }
};