#include <bits/stdc++.h>

using namespace std;

int main () {
	
	int n;
	string s;
	vector <char> a;
	cin>>n;	
	cin>>s;
	
	a.push_back(s[0]);
	
	vector <int> k(200005,0);
	k[0] = 1;
	int t = 0;
	for (int i = 0;i<n-1;i++)
	{
		if (s[i] == s[i+1])
		{
			
			k[t]++;
		}
		else
		{
			a.push_back(s[i+1]);
			t++;
			k[t]++;
		}
	}
	
	int c = 0;
	
	for (int i = 0;i<=t;i++)
	{
		c += k[i] / 2;
	}
	
	cout<<c<<endl;
	
	char next;
	if (t == 0)
	next = 'Q';
	else
	next = a[1];
	
	for (int i = 0;i<=t;i++)
	{

				
		
		if (t == 0)
		next = 'Q';
		else if (i == t)
		next = 'Q';
		else
		next = a[i+1];
		
		for (int j = 0; j < k[i]; j++)
		{
			if (j % 2 == 0)
			{
				cout<<a[i];
			}
			else
			{
				if ('R' != a[i] && 'R' != next)
				{
					cout<<'R';
				}
				else if ('G' != a[i] && 'G' != next)
				{
					cout<<'G';
				}
				else if ('B' != a[i] && 'B' != next)
				{
					cout<<'B';
				}
				
			}
		}
		
	}
	
	
	
	
	return 0;
}
