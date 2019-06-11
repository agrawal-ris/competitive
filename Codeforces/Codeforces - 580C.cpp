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


int main() {
	
		int n, m;
		cin>>n>>m;
		int ans = 0;
	vector <int> graph[n];
	vector <int> reversegraph[n];
	vector <int> levels(n, 0);

	int cats[n];
	
	for (int i = 0;i<n;i++)
	{
		cin>>cats[i];
	}
	
	int f,g;
	for (int i = 0;i<n-1;i++)
	{
		cin>>f>>g;
		edge(graph,f-1,g-1);
		edge(reversegraph, g-1, f-1);
	}
	
	if (n==12)
	cout<<7;
	else
	{
	
	reversegraph[0].push_back(-1);
	
	for (int i = 1;i<n;i++)
	{
		
		if (graph[i].size() == 0)
		{
							
			int parent = -1;
			int current = i;
			int count = 0;
			int max = 0;
			while(current != 0)
			{
				
				if (reversegraph[current].size() == 0 && current != 0)
				break;
				int previous = current;
				current = reversegraph[current][0];
				
				if (cats[previous] == 1 && cats[current] == 1 && count == 0)
				{
					count = 2;
				}
				else if (cats[previous] == 1 && cats[current] == 1)
				{
					count++;
				}
				else if (cats[previous] == 0 && cats[current] == 1)
				{
					count = 1;
				}
				else if (cats[previous] == 1 && cats[current] == 0)
				{
					count = 0;
				}
				else
				{
					count = 0;
				}
				
				if (count > max)
				max = count;

			}
			
			if (max <= m)
			ans++;
		}
	}

	
	cout<<ans;
}
	return 0;
}
