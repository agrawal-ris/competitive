#include <bits/stdc++.h>

using namespace std;

int main () {
	int n;
	string s;
	
	cin>>n>>s;
	
	int a = 0, b = 0, c[100001], d = 0,e = 0;
	
	for (int i = 0;i<s.length();i++)
	{
		if (s[i] == 'B')
		{
			if (d == 0)
			{
				a++;
				d++;
			}
			else
			{
				d++;
			}
		}
		else
		{
			if (d != 0)
			{
				c[e] = d;
				e++;
				d = 0;
			}
		}
	}
	
	if (d != 0)
			{
				c[e] = d;
				e++;
				d = 0;
			}
	
	cout<<e<<endl;
	
	for (int i = 0;i<e;i++)
	{
		cout<<c[i]<<' ';
	}
	
	
	
	return 0;
}
