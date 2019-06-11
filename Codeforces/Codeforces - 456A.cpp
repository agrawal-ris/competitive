#include <bits/stdc++.h>

using namespace std;


int main() {
	
	map<int, int> map1;
	
	int n, a[100001], b[100001];
	
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		cin>>b[i];
		map1[a[i]] = b[i];
	}
	
	sort(a,a+n);
	
	int c = 0;
	for (int i=0;i<n;i++)
	{
		b[i] = map1[a[i]];

	}
	
	int max = b[0];
		for (int i=1;i<n;i++)
	{
		if (b[i] >= max)
		max = b[i];
		else
		{
			c = 1;
			break;
		}
		
	}
	

	
	if (c == 1)
	cout<<"Happy Alex";
	else
	cout<<"Poor Alex";	
	

	return 0;
}
