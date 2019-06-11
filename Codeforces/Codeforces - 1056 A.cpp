#include <bits/stdc++.h>

using namespace std;

int main () {
	
	int n, a[1000] = {0}, b,c;
	
	cin>>n;
	
	for (int i = 0; i<n; i++) {
		cin>>b;
		
		for(int j=0;j<b;j++)
		{
			cin>>c;
			a[c] += 1;
		}
	}
	
	for(int i = 0;i<1000;i++)
	{
		if(a[i] == n)
		cout<<i<<' ';
	}
	
	
	
	
	
	
	return 0;
}
