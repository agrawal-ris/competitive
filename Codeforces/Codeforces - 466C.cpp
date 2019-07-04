#include <bits/stdc++.h>

using namespace std;

int main () {
	int n;
	cin>>n;
	
	long long int a[n];
	long long int sum = 0;
	long long int c = 0, d = 0;
	for (int i = 0;i < n;i++) {
		cin>>a[i];
		sum += a[i];
	}
	
	if (sum % 3 == 0) {
		long long int ans = 0;
	
		long long int b[n] = {}, e[n] = {};
		
		b[0] = a[0];
		
		for (int i = 1;i<n;i++)
		{
			b[i] += b[i-1] + a[i];
		}
		
		for (int i = n-2;i>=0;i--)
		{
			if (b[i] == 2*sum/3) {
				d++;
			}
			e[i] = d;
		}
		
		for (int i = 0;i<n-2;i++)
		{
			if (b[i] == sum/3)
			{
				ans += e[i+1];
			}
		}
		
		cout<<ans;
	}
	else
	{
		cout<<0;
	}
	
	return 0;
}
