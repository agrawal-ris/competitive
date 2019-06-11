#include <bits/stdc++.h>

using namespace std;

int main() {
	long long int n,a[100005],b[100005], c = 0,d = 0;
	
	cin>>n;
	
	long long int k = 1;
	
	for (int i = 0;i<n;i++)
	{
		cin>>a[i];
	}
	
	for (int i = 1;i<n;i++)
	{
		if (a[i] == 1)
		{
			b[c] = k;
			c++;
			k = 0;
		}
		
		k++;
	}
	
	b[c] = k;
	
	cout<<c+1<<endl;
	
	for (int i = 0;i<=c;i++)
	{
		cout<<b[i]<<' ';
	}
	
	
	
	
	
	
	return 0;
}
