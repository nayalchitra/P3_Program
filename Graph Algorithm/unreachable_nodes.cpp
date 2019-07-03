// BSF

#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;

void UnreachableNodes(vector<int>adj[],int s,int V)
{
	bool visited[V]={false};
	int level[V]={0};
	queue<int>q;
	q.push(s);
	visited[s]=true;
	level[s]=0;
	cout<<"wthin in queue: "<<endl;
	while(!q.empty())
	{
		int p=q.front();
		cout<<p<<" ";
		q.pop();
		for(auto i=adj[p].begin();i!=adj[p].end();i++)
		{
			if(!visited[*i])
			{
				visited[*i]=true;
				level[*i]=level[p]+1;
				q.push(*i);
			}
		}
	}
	cout<<endl;
	for(int i=0;i<V;i++)
	{
	    if(!visited[i])
	        cout<<i<<" ";
	}
}

void addedge(vector<int>adj[],int v1,int v2)
{
	adj[v1].push_back(v2);
	adj[v2].push_back(v1);
}

int main()
{
	int V,E;
	int i;
	cin>>V>>E;
	vector<int>adj[V];
	int v1,v2;
	for(i=0;i<E;i++)
	{
		cin>>v1>>v2;
		addedge(adj,v1,v2);
	}
	UnreachableNodes(adj,3,V);
}