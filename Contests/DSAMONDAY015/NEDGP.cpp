// NEDGP

#include <iostream>
#include <vector>
using namespace std;
struct Edge {
    int u, v, w;
};

int main() {
	// your code goes here
	
	int N, M;
	if (!(cin>>N>>M)) return 0;
	
	vector<Edge> edges(M);
	for (int i=0; i<M; ++i) {
	    cin>> edges[i].u >> edges[i].v >> edges[i].w;
	}
	
	int S;
	cin>>S;
	
	const int INF = 1e9;
	vector<int> dist(N, INF);
	dist[S] = 0;
	
	for (int i=0; i < N - 1; ++i) {
	    bool updated = false;
	    for (const auto& edge : edges) {
	        if (dist[edge.u] != INF && dist[edge.u] + edge.w < dist[edge.v]) {
	            dist[edge.v] = dist[edge.u] + edge.w;
	            updated = true;
	        }
	    }
	    
	    if (!updated) break;
	        
	}
	
	for (int i=0; i<N; ++i) {
	    cout<<dist[i]<<(i == N - 1 ? "": " ");
	}
	
	cout<<"\n";
	
	return 0;

}
