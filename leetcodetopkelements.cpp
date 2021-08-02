class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        map<int,int> m;
        priority_queue<pair<int,int> > h; //max heap
        for(int i = 0; i < nums.size(); i++)
        {
            m[nums[i]]++;
        }
        for(auto node : m)
        {
            h.push(make_pair(node.second,node.first)); //sort on bases of number occurences
        }
        for(int i=1; i <=k ;i++)
        {
            ans.push_back(h.top().second);
            h.pop();
        }
        return ans;
    }
};