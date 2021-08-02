class Solution {
public:
    vector<vector<int>> ans;
    vector<int> v;
    void dfs(int node,vector<vector<int>> &graph)
    {
       v.push_back(node);
        if(node == graph.size()-1)
        {
            ans.push_back(v);
        }
        else
        {
            for(auto children : graph[node])
            dfs(children,graph);
        }
        v.pop_back();
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
       dfs(0,graph);
        return ans;
    }
};