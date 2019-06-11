#include <bits/stdc++.h>

using namespace std;

int main() {
	long long int n,t, a[100005],b[100005];
	
	cin>>n>>t;
	
	for (int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	long long int start = 0, finish = -1, sum = 0, total = 0, max = 0,c = 0;
	
	for (int i = 0; i < n; i++)
	{
		if (total + a[i] <= t)
		{
			total += a[i];
			c++;
			finish++;
		}
		else
		{
			total -= a[start];
			start++;
			i--;
			c--;
		}
		
		
		if (finish - start + 1 > max)
		max = finish - start + 1;
		

	}
	
	cout<<max;
	
	

	return 0;
}
