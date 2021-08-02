class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
      vector<int> v(n,1);
       int left = 1,right=1;
        for(int i = 0; i < n ; i++)
        {
            v[i] *= left;
            left = left*nums[i];
        }
        for(int i = n-1 ; i >=0 ; i--)
        {
            v[i] *= right;
            right = right*nums[i];
        }
        return v;
    }
};