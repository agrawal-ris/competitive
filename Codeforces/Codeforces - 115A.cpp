#include <bits/stdc++.h>

using namespace std;

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

 void BFS(vector <int> graph[],int size,int source, vector <int> &levels) {
 	
 	vector <bool> visited(size, false);
 	
 	vector <int> queue;
 	
 	queue.push_back(source);
 	
 	visited[source] = true;
 	
 	levels[source] = 0;
 	
 	while(!queue.empty())
 	{
 		int a = queue.front();
 				 
		queue.erase(queue.begin());
		
		cout<<a<<' ';
		
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
	
		int n;
	cin>>n;
	vector <int> graph[n];
	vector <int> levels(n, 0);

 	for (int i = 0;i<n;i++)
 	{
 		int t;
 		cin>>t;
 		if (t != -1)
 		{
 			edge(graph, t-1, i);
		}
	}
	
	int max = 0;

	
	for (int i = 0;i<n;i++) {
		vector <int> levels(n, 0);	
	BFS(graph, n, i, levels);
	
	if (max < max_element(levels.end(), levels.begin()))
	{
		max = max_element(levels.end(), levels.begin());
	}
}
	
	cout<<max;
	
	return 0;
}
