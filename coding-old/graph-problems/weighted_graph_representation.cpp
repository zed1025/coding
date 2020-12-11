#include<iostream>
#include<vector>

// C++ program to represent undirected and weighted graph 
// using STL. The program basically prints adjacency list 
// representation of graph

using namespace std;

//function to add an edge
void addEdge(vector<pair<int, int> > adj[], int u, int v, int wt) {
	adj[u].push_back(make_pair(v, wt));
	adj[v].push_back(make_pair(u, wt));
}

//printing the weighted undirected graph represented as adjacency list
void printGraph(vector<pair<int, int> > adj[], int V) {
	int wt, v;
	for(int i=0; i<V; i++) {
		cout << "Node " << i << " makes an edge with\n";
		for(auto it=adj[i].begin(); it != adj[i].end(); ++it) {
			v = it->first;
			wt = it->second;
			cout << "\tNode " << v << " with edge weight = " << wt << "\n";
		}cout << "\n";
	}
}

int main() {
	int V = 5;
	vector<pair<int, int> > adj[V];
	addEdge(adj, 0, 1, 10); 
    addEdge(adj, 0, 4, 20); 
    addEdge(adj, 1, 2, 30); 
    addEdge(adj, 1, 3, 40); 
    addEdge(adj, 1, 4, 50); 
    addEdge(adj, 2, 3, 60); 
    addEdge(adj, 3, 4, 70); 
    printGraph(adj, V); 
    return 0;
}
