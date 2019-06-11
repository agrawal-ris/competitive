#include <bits/stdc++.h>

using namespace std;

int main () {
	
	long long int n, a[100001];
	
	cin>>n;
	
	for (int i = 0;i<n;i++)
	{
		cin>>a[i];
	}
	
	long long int *min, *max;
	min = min_element(a,a+n);
	max = max_element(a,a+n);
	cout<<*max-*min+1 - n;
	return 0;
}
	
	
	
	
	
	
