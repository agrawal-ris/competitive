#include <bits/stdc++.h>

using namespace std;

int main () {
	long long int n, k;
	vector <long long int> a;	
	vector <long long int> b;
	vector <long long int> c;
	cin>>n>>k;
	
	long long int t;
	
	for (int i = 0;i<n;i++)
	{
		cin>>t;	
		a.push_back(t);	
	}	
	
	
	b.push_back(0);
	
	for (int i = 1;i<n;i++)
	{
		b.push_back(b[i-1] + a[i]);
	}
	
	long long int min = 9999999999, maxi = -1;
	
	for (int i = 0;i<=n-k;i++)
	{
		if (b[i+k-1] - b[i] + a[i] < min)
		{
			maxi = i+1; 
			min = b[i+k-1] - b[i] + a[i]; 	
		}		
	}	
	
	
	cout<<maxi;
	
	return 0;
}
