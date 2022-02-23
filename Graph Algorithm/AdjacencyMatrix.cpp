#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

void addEdge(vector<int>adj[],int u,int v)
{
	adj[u].push_back(v);
	adj[v].push_back(u);
}

void printGraph(vector<int>adj[], int V )
{
	for(int i =0; i< V ;i++)
	{
		cout<<i;
		for(auto j : adj[i])
			cout<<"-> "<<j;
		cout<<endl;
	}
}

int main()
{
	int V = 6;
	vector<int> adj[6];
	addEdge(adj,0,1);
	addEdge(adj,0,2);
	addEdge(adj,1,3);
	addEdge(adj,4,5);
	printGraph(adj,5);
}
