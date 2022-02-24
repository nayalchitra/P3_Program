// Depth First Search (DFS)

// time complexity - O(V+E) , V is the number of vertices and E is the number of edges
// space complexity - O(V)

/* Application of DFS 

1) Detecting a cycle
2) path finding (b/w two given vertices u and z)
	- call DFS(G,u) with u as the start vertex
	- use stack S to keep track of the path b/w the start vertex and the current vertex
	- as soon as destination vertex z is reached, return the path as the contents of the stack

3) topological sorting
4) to test if a graph is bipartite
5) finding strongly connected components of a graph
6) solving puzzles with only one solution

*/


#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[],int u,int v)
{
	adj[u].push_back(v);
	adj[v].push_back(u);
}

void dfs(vector<int> adj[] ,int s, vector<int>&v , vector<bool>& visited)
{
	visited[s] = true;
	v.push_back(s);
	for(auto i = adj[s].begin(); i!=adj[s].end(); i++)
	{
		if(!visited[*i])
			dfs(adj, *i, v, visited);
	}
}

vector<int> dfsOfGraph(vector<int> adj[] ,int V )
{
	vector<bool> visited(V,false);
	vector<int> v;
	// start dfs from 2
	dfs(adj, 2, v , visited);
	return v ;
}

int main()
{
	int V = 4;
	vector<int> adj[V];
	addEdge(adj,0, 1);
    addEdge(adj,0, 2);
    addEdge(adj,1, 2);
    addEdge(adj,2, 0);
    addEdge(adj,2, 3);
    addEdge(adj,3, 3);
 
    
    vector<int> v = dfsOfGraph(adj, V);
    for(auto i=v.begin(); i!=v.end(); i++)
    	cout<<(*i)<<" ";
    cout<<endl;
}
