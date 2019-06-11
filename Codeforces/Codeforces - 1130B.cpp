#include <bits/stdc++.h>

using namespace std;

int main () {
	
	long long int n;
	cin>>n;
	vector <long long int> a[n+1];
	
	long long int z;
	for (long long int i = 0;i<2*n;i++)
	{
		cin>>z;
		a[z].push_back(i);
	}
	
	long long int current = 0;
	long long int steps = 0;
	
	for (long long int i = 0; i < 2*n; i++)
	{
		long long int t = (i % n) + 1;
		long long int temp = 0;
		long long int min = 999999999;
		
		for (int j = 0;j<a[t].size();j++)
		{
			if (abs(a[t][j] - current) < min)
			{
				min = abs(a[t][j] - current);
				temp = a[t][j];
			}
		}
		
		current = temp;
		steps += min;
		
	}
	
	cout<<steps;
	
	
	
	return 0;
}
