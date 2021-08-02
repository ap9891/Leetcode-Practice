class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
        unordered_map<int,vector<pair<int,double>>> m;
        for(int i =0 ; i<edges.size();i++)
        {
            m[edges[i][0]].push_back(make_pair(edges[i][1],succProb[i]));            
            m[edges[i][1]].push_back(make_pair(edges[i][0],succProb[i]));

        }
        vector<double> dist(n,0);
        dist[start]=1;
        set<pair<double,int>> s;
        s.insert(make_pair(1,start));
        while (!s.empty())
        {
            auto temp = *(s.rbegin());
            double parentdist = temp.first;
            int parent = temp.second;
            s.erase(prev(s.end()));
            for(auto children : m[parent])
            {
                if (parentdist*children.second > dist[children.first])
                {
                    auto f = s.find(make_pair(dist[children.first],children.first));
                    if (f != s.end())
                    {
                        s.erase(f);
                    }
                      dist[children.first] = parentdist *children.second;
                    s.insert(make_pair(dist[children.first],children.first));
                }
                
            }
        }
        return dist[end];
    }
    
};