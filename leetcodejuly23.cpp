class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        int res = 0;
        for(int i =0; i  <n ; i++)
        {
            res = res^nums[i];
        }
        int temp =res;
        int pos=0;
        while((temp&1) != 1)
        {
            pos++;
            temp=temp>>1;
        }
        int mask = (1<<pos);
        int x=0,y=0;
        for( int i =0 ; i < n ; i ++)
        {
            if((mask&nums[i]) > 0)
            {
                x=x^nums[i];
            }
        }
        ans.push_back(x);
        y = res^x;
        ans.push_back(y);
        return ans;
    }
};