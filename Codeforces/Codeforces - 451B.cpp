#include <bits/stdc++.h>

using namespace std;

int main () {
	long long int n , a[100001], b[100001];
	
	cin>>n;
	
	for (int i=0;i<n;i++)
	{
		cin>>a[i];
		b[i] = a[i];
	}
	
	sort(b,b+n);
	
	int c = 0, d = 0, start, finish;
	

	
	for (int i = 0;i<n-1;i++)
	{
		if (a[i] <= a[i+1])
		{
			if (c == 1)
			{
				finish = i+1;
				c = 2;
			}
		}
		else
		{
			if (c == 0)
			{
				start = i+1;
				c = 1;
			}
			if (c == 2)
			{
				c = 3;
			}
		}
	}
	
	
	if (c == 3)
	{
		cout<<"no";
	}
	else if (c == 2)
	{
		if (a[finish-2] >= a[start-2])
		cout<<"yes"<<endl<<start<<' '<<finish;
		else
		cout<<"no";
	}
	else if (c == 1)
	{
		if (a[n-1] >= a[start-2])
		cout<<"yes"<<endl<<start<<' '<<n;
		else
		cout<<"no";
	}
	else if (c == 0)
	{
		cout<<"yes"<<endl<<"1 1";
	}
	
	
	
	
	
	
	
	return 0;
}
