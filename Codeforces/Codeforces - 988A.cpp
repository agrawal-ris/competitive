#include <bits/stdc++.h>

using namespace std;

int main () {
	long long int n, k, a[10001],b[10001] = {0},c[10001], d = 0;
	
	cin>>n>>k;
	
		for (int i = 0;i < n; i++)
	{
		cin>>a[i];
		
		b[a[i]]++;
		
		if (b[a[i]] == 1)
		{
			c[d++] = i+1;
		}
	}
	
	if (d >= k)
	{
		cout<<"YES"<<endl;
		
		for(int i=0;i<k;i++)
		{
			cout<<c[i]<<' ';
		}
	}
	else
	{
		cout<<"NO";
	}
	
	
	
	
	
	
	
	return 0;
}
