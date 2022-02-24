// disconnected graph DFS
// time complexity - O(V+E)
//space complexity - O(V)

#include<bits/stdc++.h>
using namespace std;


class Graph{
	void DFSUtil(int V );
	
	public:
		map<int,bool>visited;
		map<int,list<int>> adj;
		
		void addEdge(int V, int w );
		
		void DFS();
};

void Graph :: addEdge(int v, int w )
{
	adj[v].push_back(w);
}

void Graph :: DFSUtil(int v )
{
	visited[v] = true;
	cout<<v<<" ";
	
	for(auto i = adj[v].begin(); i!=adj[v].end(); i++)
	{
		if(!visited[*i])
			DFSUtil(*i);
	}
}

void Graph :: DFS()
{
	for(auto i : adj)
	{
		if(visited[i.first] == false)
			DFSUtil(i.first);
	}
}


int main()
{
	Graph g;
	g.addEdge(0, 1);
	g.addEdge(0, 9);
	g.addEdge(1, 2);
	g.addEdge(2, 0);
	g.addEdge(2, 3);
	g.addEdge(9, 3);
	g.addEdge(4,5);
	
	cout<<"Following is Depth First Traversal "<<endl;
	
	g.DFS();
}

