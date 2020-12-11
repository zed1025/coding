#include<iostream>
#include<vector>


//function to use the edges and form a adjacency list
void addEdge(std::vector<int> adj[], int u, int v) {
    adj[u].push_back(v);
    adj[v].push_back(u);
}

//A utility function to do DFS of a graph recursively from a given vertex
void DFSUtil(std::vector<int> adj[], std::vector<bool> &visited, int u/*start node*/) {
    visited[u] = true;
    std::cout << u << " ";
    for(int i=0; i<adj[u].size(); i++) {
        if(visited[adj[u][i]] == false) {
            DFSUtil(adj, visited, adj[u][i]);
        }
    }
}


//This function calls DFSUtil for all the unvisited vertices
void DFS(std::vector<int> adj[], int V) {
    std::vector<bool> visited(V, false);
    for(int i=0; i<V; i++) {
        if(visited[i] == false) {
            DFSUtil(adj, visited, i);
        }
    }
}

int main() {
    int V = 5; //the number of vertices
    std::vector<int> adj[V];
//    addEdge(adj, 0, 1);
//    addEdge(adj, 0, 4);
//    addEdge(adj, 1, 2);
//    addEdge(adj, 1, 3);
//    addEdge(adj, 1, 4);
//    addEdge(adj, 2, 3);
//    addEdge(adj, 3, 4);
	
	addEdge(adj, 1, 3);
    addEdge(adj, 1, 4);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 4);
	addEdge(adj, 0, 1);
    addEdge(adj, 0, 4);
    addEdge(adj, 1, 2);
    DFS(adj, V);
    return 0;
}
