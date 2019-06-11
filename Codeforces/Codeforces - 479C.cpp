#include <bits/stdc++.h>

using namespace std;

int main() {
	
	long long int n, a[100001], b[100001];
	
	map <long long int,long long int> m1;
	
	cin>>n;
	
	for (int i = 0;i<n;i++)
	{
		cin>>a[i]>>b[i];
		m1[a[i]] = b[i];
	}
	
	sort(a, a+n);
	
	for (int i = 0;i<n;i++)
	{
		b[i] = m1[a[i]];
	}
	
	int start = 0;
	b[n] = -1;
	
	sort(b, b + n);
	cout<<endl; 
	
	for (int i = 0;i<n;i++)
	{
		cout<<a[i]<<' '<<b[i]<<endl;
	}
	
	long long int current = b[0];
	
	for (int i = 1;i<n;i++)
	{
		if (b[i] >= current)
		current = b[i];
		else
		current = a[i];
	}	
	
	cout<<current;
	
	
	

	return 0;
}
