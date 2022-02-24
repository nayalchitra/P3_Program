// Detect cycle in an undirected graph using DFS

// time complexity - O(V+E)
// space complexity - O(V)


#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int>adj[] ,int u,int v )
{
	adj[u].push_back(v);
	adj[v].push_back(u);
}

bool isCycleUtil(int s, vector<int>adj[] ,int V , vector<bool>&visited,int parent)
{
	visited[s] = true;
	
	for(auto i = adj[s].begin();i!=adj[s].end(); i++)
	{
		if(!visited[*i]){
			isCycleUtil(*i,adj,V,visited,s);
			return true;
		}
		else if(*i != parent)
			return true;
	}
	return false;
}

bool isCylic(vector<int>adj[],int V )
{
	vector<bool>visited(V,false);
	
	for(int i =0 ;i <V ; i++){
		if(!visited[i] && isCycleUtil(i,adj,V , visited,-1))
			return true;
	}	
	return false;
}

int main()
{
	int V = 5;
	
	vector<int>adj[V];
	
	addEdge(adj,1, 0);
	addEdge(adj,0,2);
	addEdge(adj,2,1);
	addEdge(adj,0,3);
	addEdge(adj,3,4);
	
	isCyclic(adj,V)?cout<<"Graph contains cycle ":cout<<"Graph doesn't contains cycle";
	
	
}
