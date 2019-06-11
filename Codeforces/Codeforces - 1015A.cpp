#include <bits/stdc++.h>

using namespace std;

int main() {
	long long int n,m,z[105] = {0};
	
	cin>>n>>m;
	
	for (int i = 0;i<n;i++)
	{
		int l, r;
		cin>>l>>r;
		
		for (int j = l;j<=r;j++)
		{
			z[j] = 1;
		}
		
	}
	
	int c = 0;
	
		
	for (int i = 1;i<=m;i++)
	{
		if (z[i] != 1)
		c++;
	}
	
		cout<<c<<endl;
		
	for (int i = 1;i<=m;i++)
	{
		if (z[i] != 1)
		cout<<i<<' ';
	}
	
	

	
		
	
	
	
	
	
	
	return 0;
}
