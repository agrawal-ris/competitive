#include <bits/stdc++.h>

using namespace std;

int main () {
	
	long long int n, a[100001];
	
	cin>>n;
	
	for (int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	

	for (int i=0;i<n;i++)
	{
		if (a[i] % 2 == 0)
		cout<<a[i]-1<<' ';
		else
		cout<<a[i]<<' ';
	}
	
	return 0;
}
	
	
	
	
	
	
