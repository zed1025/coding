#include<iostream>
#include<vector>

/*
	Representing adjacency lists
*/

using namespace std;

//function to add items to the adjacency list
void addEdge(vector<int> adj[], int u, int v) {	//(u,v) is the edge
	adj[u].push_back(v);
	adj[v].push_back(u);
}

//function for printing the adjacency list
void printGraph(vector<int> adj[], int V/*the number of vertices*/) {
	for(int i=0; i<V; i++) {
		cout << "Adjacency list of vertex " << i << "\nhead";
		for(auto x: adj[i])
			cout << " -> " << x;
		cout << endl;
	}
}


int main() {
	int V = 5; // number of vertices
	vector<int> adj[5]; //array of vectors

	addEdge(adj, 0, 1);
	addEdge(adj, 0, 4);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 1, 4);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 4);
    printGraph(adj, V);

    return 0;
}
