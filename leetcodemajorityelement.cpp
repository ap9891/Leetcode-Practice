class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int n = nums.size();
        int y = n/2;
        int x=0;
        map<int,int> freq;
        for(int i=0; i < n ;i++)
        {
            int index=nums[i];
            freq[index]++;
        }
        for(auto ele : freq)
        {
            if(ele.second > y)
                x=ele.first;
        }
        return x;
    }
};