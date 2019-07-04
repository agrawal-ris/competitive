#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int n;
	cin>>n;
	
	int p[n], b[n] = {};
	
	for (int i = 0; i < n; i++) {
		cin>>p[i];
	}
	
	int max = 0;
	
	for (int i = 0;i<n;i++)
	{
		if (p[i] == -1)
		{
			b[i] = 1;
		}
		else
		{
			b[i] += b[p[i]-1] + 1;
		}
		
		if (max < b[i]) {
			max = b[i];
		}
	}

	cout<<max;
	
	
	
	return 0;
}
