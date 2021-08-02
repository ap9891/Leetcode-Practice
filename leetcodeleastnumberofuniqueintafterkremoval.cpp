class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        map<int,int> m;
        priority_queue<int,vector<int>,greater<int> > h;
        for(int i=0 ;i < arr.size(); i++)
        {
            m[arr[i]]++;
        }
        for(auto node : m)
        {
            h.push(node.second);
        }
        while(k != 0)
        {
            if(h.top() > k)
            {
                break;
            }
            else
            {
                k -= h.top();
                h.pop();
            }
        }
        return h.size();
    }  
};