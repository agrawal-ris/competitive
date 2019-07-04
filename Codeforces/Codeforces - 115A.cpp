#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int n;
	cin>>n;
	
	int p[n], b[n] = {};
	
	for (int i = 0; i < n; i++) {
		cin>>p[i];
	}
	
	int mx = 0;
	
	for (int i = 0;i<n;i++)
	{
		int k = i+1;
		int count = 0;
		while (k != -1) {
			count++;
			k = p[k-1];
		}
		
		mx = max(count, mx);
	}

	cout<<mx;
	
	
	
	return 0;
}
