#include <bits/stdc++.h>

using namespace std;

void edge (vector <int> graph[], int a, int b) {
	graph[a].push_back(b);
}

 void BFS(vector <int> graph[],int size,int source, vector <int> &levels, int m) {
 	
 	vector <bool> visited(size, false);
 	
 	vector <int> queue;
 	
 	queue.push_back(source);
 	
 	visited[source] = true;
 	
 	levels[source] = 0;
 	
 	while(!queue.empty())
 	{
 		int a = queue.front();
 				 
		queue.erase(queue.begin());
		

		for (int i=0;i<graph[a].size();i++)
		{
			if (visited[graph[a][i]] == false)
			{
				visited[graph[a][i]] = true;
				levels[graph[a][i]] = levels[a] + 1;
				queue.push_back(graph[a][i]);
			}
		}
		 
		 
		 	
	}
 	
 	
 }

int main() {
	
	int n, m;
	
	cin>>n>>m;
		int size = max(n,m)*2;
	vector <int> graph[size+1];
	vector <int> levels(size+1, 0);

	for (int i = 1;i<=size;i++)
	{
		if (i <= size/2)
		{
		edge(graph, i, i-1);
		edge(graph, i, i*2);
		}
		else
		{
			edge(graph, i, i-1);
		}
	}
	
	

	BFS(graph, size+1, n, levels, m);
	
	cout<<levels[m];
	return 0;
}
