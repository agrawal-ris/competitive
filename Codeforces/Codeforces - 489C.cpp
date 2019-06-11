#include <bits/stdc++.h>

using namespace std;

int main () {
	int m, s;
	
	cin>>m>>s;
	
	int a[m] = {0}, b[m] = {0};
	
	if (s == 0 && m == 1)
	{
		cout << "0 0";
	}
	else if (s == 0 || s > 9*m)
	cout<<"-1 -1";
	else
	{	
	int sum = s;
	for (int i=0;i<m;i++)
	{
		
		for (int j = 9;j>=0;j--)
		{
			if (sum-j >= 0)
			{
				a[i] = j;
				sum -= j;
				break;
			}
		}
		if (sum == 0)
		break;
	}	
	sum = s;
	b[0] = 1;
	sum-=1;
	
	for (int i=m-1;i>=0;i--)
	{
		
			for (int j = 9;j>=0;j--)
		{
			if (sum-j >= 0)
			{
				b[i] += j;
				sum -= j;
				break;
			}
		}
		
		if (sum == 0)
		break;
	}	


for (int i=0;i<m;i++)
	{cout<<b[i];}

	cout<<' ';
	
for (int i=0;i<m;i++)
	{cout<<a[i];}
	
}
	return 0;
}
