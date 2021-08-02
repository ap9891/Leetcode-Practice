class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
        vector<pair<int,int>> v;
        int flag =0;
        for(int i=0 ;i < nums.size();i++)
        {
            v.push_back({nums[i],i});
        }
        sort(v.begin(),v.end());
        int i=0;
        int j=1;
            while(j<nums.size())
            {
                long long int d1 = v[i].first;
                long long int d2 = v[j].first;
                if(abs(v[i].second-v[j].second)<= k && abs(d1-d2)<= t)
                {
                    return true;
                }
                if(abs(d1-d2)>t)
                {
                    i++;
                }
                if(abs(v[i].second-v[j].second)>k)
                {
                    j++;
                }
                if(i==j)
                {
                    j++;
                }
            }
      return false;
    }
};