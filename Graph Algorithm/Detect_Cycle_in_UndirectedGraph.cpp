// Detect cycle in an undirected graph using BFS

#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int>adj[], int u,int v )
{
	adj[u].push_back(v);
	adj[v].push_back(u);
}

bool checkCycle (vector<int> adj[] ,int V , int s, vector<bool>&visited)
{
	visited[s] = true;
	queue<int>q;
	q.push(s);
	vector<int> parent(V,-1);
	
	while(!q.empty())
	{
		int u = q.front();
		q.pop();
		
		for(auto v : adj[u])
		{
			if(!visited[v])
			{
				visited[v] = true;
				parent[v] = u;
				q.push(v);
			}
			else if(parent[u] != v)
				return true;
		}
	}
	return false;
}

bool isCycle(vector<int> adj[], int V )
{
	vector<bool> visited(V , false);
	for(int i =0;i < V; i++)
	{
		if(!visited[i] && checkCycle(adj,V , i, visited))
			return true;
	}
	return false;
}


int main()
{
	int V = 5;
	vector<int> adj[V];
	/*
	addEdge(adj,0,1);
	addEdge(adj,1,2);
	addEdge(adj,1,4);
	addEdge(adj,2,3);
	addEdge(adj,4,3);
	*/
	
	addEdge(adj,1,2);
	addEdge(adj,2,3);
	if( isCycle(adj,V))
		cout<<"given graph is cyclic"<<endl;
	else 
		cout<<"given graph is not cyclic" <<endl;
}
