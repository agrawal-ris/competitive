#include <bits/stdc++.h>

using namespace std;

int main () {
	
	long long int n, a[100001], b[100001] = {0};
	
	cin>>n;
	
	long long int max = 0;
	
	for (int i = 0;i<n;i++)
	{
		cin>>a[i];
		b[a[i]]++;
		
		if (max < b[a[i]])
		max = b[a[i]];
	}
	
	cout<<max;
	

	return 0;
}
	
	
	
	
	
	
