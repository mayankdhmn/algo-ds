#include <bits/stdc++.h>
using namespace std;

#define ll long long

struct DSU {
    vector<int> parent, size;

    DSU(int n) {
	    distinct_components = n;
        for (int i=0; i<n; i++) {
            parent.push_back(i);
            size.push_back(1);
        }
    }
    
    bool union_set(int u, int v) {       
        int u = find_set(u), v = find_set(v);
        if (u != v){
            if (size[v] > size[u])
                swap(u, v);
            parent[v] = u;
            size[v] += size[u];
        }
    }

    int find_set(int v) {
        if (v == parent[v])
            return v;
        return parent[v] = find_set(parent[v]);
    }
};


int main(){
	int N; cin >> N; // Number of vertices possible in the graph
	dsu = DSU(N); // Creating a graph with N vertices
	dsu.union_set(u, v); // Adding an edge. If returned true, the current edge doesn't form a cycle and can be added
	dsu.find_set(v); // Find the leader of the component in which the node is located
}

