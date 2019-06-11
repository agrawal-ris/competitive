#include <bits/stdc++.h>

using namespace std;

int main () {
	
	int n, a[100005];
	
	cin>>n;
	
	int po = 0, ne = 0;
	for (int i = 0;i<n;i++)
	{
		cin>>a[i];
		
		if (a[i] < 0)
		ne++;
		else if (a[i] > 0)
		po++;
	}
	
	if (n % 2 == 0)
	{
		if (po >= n/2)
		{
			cout<<"1";
		}
		else if (ne >= n/2)
		{
			cout<<"-1";
		}
		else
		{
			cout<<0;
		}
	}
	else
	{
		if (po >= n/2 + 1)
		{
			cout<<"1";
		}
		else if (ne >= n/2 + 1)  
		{
			cout<<"-1";
		}
		else
		{
			cout<<0;
		}
	}
	
	
	
	
	return 0;
}
