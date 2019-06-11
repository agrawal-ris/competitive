#include <bits/stdc++.h>

using namespace std;

int main () {
	
	long long int n, a[100001];
	
	cin>>n;
	
	for (int i = 0;i < n; i++)
	{
		cin>>a[i];
	}
	
	if (n==1)
	{
		if (a[n-1] == 0)
		cout<<"UP";
		else if (a[n-1] == 15)
		cout<<"DOWN";
		else
		cout<<"-1";
	}
	else
	{
		if (a[n-1] == 0)
		{
			cout<<"UP";
		}
		else if (a[n-1] == 15)
		{
			cout<<"DOWN";
		}
		else
		{
			if (a[n-1]>a[n-2])
			cout<<"UP";
			else
			cout<<"DOWN";
		}
	}
	return 0;
}
	
	
	
	
	
	
