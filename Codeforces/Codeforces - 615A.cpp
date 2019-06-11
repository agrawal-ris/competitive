#include <bits/stdc++.h>

using namespace std;

int main () {
	
	int n, m, a[100001] = {0},count = 0;
	
	cin>>n>>m;
	
	int x,y;
	
	for (int i = 0;i<n;i++)
	{
		cin>>x;
		
		for (int j=0;j<x;j++)
		{
			cin>>y;
			
			if (a[y] == 0)
			{
				a[y] = 1;
				count++;
			}
		}
	}
	
	if (count == m)
	cout<<"YES";
	else
	cout<<"NO";
	
	
	return 0;
}
