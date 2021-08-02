class Solution {
     vector<int> ans;
    void dfshelper(int node, vector<int> &visited,vector<int> graph[],vector<int> &ans,bool &poss)
    {
        visited[node] = 1;
        for( auto children : graph[node])
        {
            if(visited[children]==1)
            {
                poss=false;
                return;
            }
            if(visited[children]==0)
            {
                dfshelper(children,visited,graph,ans,poss);
            }
        }
        visited[node]=2;
        ans.push_back(node);
    }
public:
  
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
      int m = prerequisites.size();
        int n = numCourses;
        if(n==0) return vector<int> ();
        vector<int> graph[n];
        for(int i=0 ; i < m ; i++)
        {
            graph[prerequisites[i][0]].push_back(prerequisites[i][1]);
        }
        vector<int> ans;
        bool poss=true;
        vector<int> visited(n,0);
        for(int i=0 ;i < n ; i++)
        {
            if(visited[i]==0)
            {
                dfshelper(i,visited,graph,ans,poss);
            }
        }
        if(poss==false)
        return vector<int> ();
        else
        return ans;
    }
};