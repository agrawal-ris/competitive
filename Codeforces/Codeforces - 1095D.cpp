#include <bits/stdc++.h>

using namespace std;

vector <int> backedge;
vector <bool> finished(20, false);
int count = 0;

void edge (vector <int> graph[], int a, int b) {
	graph[a].push_back(b);
}

void printgraph(vector <int> graph[], int size)
{
	for (int i=0; i<size; i++)
	{
		cout<<i;
		
		for (int j=0;j<graph[i].size();j++)
		{
			cout<<" -> "<< graph[i][j];
		}
		
		cout<<endl;
	}
}

void DFSearch(vector <int> graph[], int source, vector <bool> &visited, vector <int> &parent)
{
	visited[source] = true;
	cout<<source+1<<' ';
	
	for (int i=0;i<graph[source].size();i++)
	{
		if (visited[graph[source][i]] == false)
		{
				DFSearch(graph, graph[source][i], visited,parent);
				parent[graph[source][i]] = source;
		}
		
		else {
			if (finished[graph[source][i]] == false)
			{
				backedge.push_back(source);
				backedge.push_back(graph[source][i]);
			}
		}
		
	}
	
	finished[source] = true;
}

void FullDFS(vector <int> graph[], int size, int source, vector <int> &parent) {
	
	vector <bool> visited(size, false);	
	DFSearch(graph, source, visited,parent);
	for (int i = 0;i<size; i++) {
		if (visited[i] == false)
		{
			cout<<endl;
			DFSearch(graph, i, visited, parent);
		}
	}
	
	
	
}

void DFSearch1(vector <int> graph[], int source, vector <bool> &visited, vector <int> &parent)
{
	visited[source] = true;

	
	for (int i=0;i<graph[source].size();i++)
	{
		if (visited[graph[source][i]] == false)
		{
				DFSearch1(graph, graph[source][i], visited,parent);
				parent[graph[source][i]] = source;
		}
		
		else {
			if (finished[graph[source][i]] == false)
			{
				backedge.push_back(source);
				backedge.push_back(graph[source][i]);
			}
		}
		
	}
	
	finished[source] = true;
}


void FullDFS1(vector <int> graph[], int size, int source, vector <int> &parent) {
	
	vector <bool> visited(size, false);	
	DFSearch1(graph, source, visited,parent);
	for (int i = 0;i<size; i++) {
		if (visited[i] == false)
		{
			cout<<endl;
			DFSearch1(graph, i, visited, parent);
		}
	}
	
	
	
}



 
int main () {

	int n;
	cin>>n;
	long long int size = n;
	long long int l, r;
	vector <int> graph[size];
	vector <int> parent(size, 0);
	for (int i=0;i<n;i++)
	{
		cin>>l>>r;
		edge(graph, i, l-1);
		edge(graph, i, r-1);

	}
	
	
	FullDFS1(graph, size, 0, parent);
	
	FullDFS(graph, size, backedge[1], parent);
	
	return 0;
}
