#include <bits/stdc++.h>

using namespace std;

int main() {
	long long int n,m,a[100005],l,k[100005] = {0};
	
	cin>>n>>m;
	
	for (int i=0;i<n;i++)
	{
		cin>>a[i];
	}

	int prev = 1;
	int current = 0;
	k[a[n-1]] = 1;
	a[n-1] = 1;
	
	for (int i=n-2;i>=0;i--)
	{
		if (k[a[i]] == 0)
		{
			k[a[i]]++;
			current = prev + 1;
			a[i] = current;
			prev = current;
		}
		else
		{
			k[a[i]]++;
			current = prev;
			a[i] = current;
			prev = current;
		}
		
	}
	
	for (int i=0;i<m;i++)
	{
		cin>>l;
		cout<<a[l-1]<<endl;
	}
	
	
	
	return 0;
}
