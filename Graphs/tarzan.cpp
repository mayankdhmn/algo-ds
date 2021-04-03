// Find those edges which lie in a cycle and remove them
// This gives the critical edges

class Solution {
public:
    set < pair < int, int > > result1;
    vector < int > rank;
    vector < vector < int > > graph;
    
    int dfs(int u, int depth){
        if (rank[u] >= 0)
            return rank[u];
        rank[u] = depth;
        int min_depth = depth;
        for (int v : graph[u]){
            if (rank[v] == depth - 1)
                continue;
            int back_depth = dfs(v, depth + 1);
            if (back_depth <= depth){
                int p = u, q = v; if (p > q) swap(p, q);
                result1.erase({p, q});
            }
            min_depth = min(min_depth, back_depth);
        }
        return min_depth;
    }
    
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        graph.clear(); graph.resize(n);
        for (auto& c : connections){
            int p = c[0], q = c[1]; if (p > q) swap(p, q);           
            graph[p].push_back(q);
            graph[q].push_back(p);
            result1.insert({p, q});
        }
        rank.clear(); rank = vector < int > (n, -2);
        dfs(0, 0);
        vector < vector < int > > result;
        for (auto& r : result1)
            result.push_back(vector < int > {r.first, r.second});
        return result;
    }
};
