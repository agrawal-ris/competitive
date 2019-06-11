#include <bits/stdc++.h>

using namespace std;

int main () {
	
	int n;
	string s;
	
	cin>>n;
	
	cin>>s;
	
	vector <char> a, b, c, d, e, f;
	int t[6] = {0};
	int min = 999999;
	
	for (int i = 0;i<n;i++)
	{
		if (i % 3 == 0)
		{
			a.push_back('R');
		}
		else if (i % 3 == 1)
		{
			a.push_back('G');
		}
		else
		{
			a.push_back('B');
		}
	}
	
		for (int i = 0;i<n;i++)
	{
		if (i % 3 == 0)
		{
			b.push_back('R');
		}
		else if (i % 3 == 1)
		{
			b.push_back('B');
		}
		else
		{
			b.push_back('G');
		}
	}
	
		for (int i = 0;i<n;i++)
	{
		if (i % 3 == 0)
		{
			c.push_back('B');
		}
		else if (i % 3 == 1)
		{
			c.push_back('G');
		}
		else
		{
			c.push_back('R');
		}
	}
	
		for (int i = 0;i<n;i++)
	{
		if (i % 3 == 0)
		{
			d.push_back('B');
		}
		else if (i % 3 == 1)
		{
			d.push_back('R');
		}
		else
		{
			d.push_back('G');
		}
	}
	
		for (int i = 0;i<n;i++)
	{
		if (i % 3 == 0)
		{
			e.push_back('G');
		}
		else if (i % 3 == 1)
		{
			e.push_back('R');
		}
		else
		{
			e.push_back('B');
		}
	}
	
		for (int i = 0;i<n;i++)
	{
		if (i % 3 == 0)
		{
			f.push_back('G');
		}
		else if (i % 3 == 1)
		{
			f.push_back('B');
		}
		else
		{
			f.push_back('R');
		}
	}
	
	for (int j = 0; j < 6;j++) {
	for (int i = 0; i < n;i++)
	{
		if (j == 0)
		{
			if (s[i] != a[i])
			t[j]++;
		}
		else if (j == 1)
		{
			if (s[i] != b[i])
			t[j]++;
		}
		else if (j == 2)
		{
			if (s[i] != c[i])
			t[j]++;
		}
		else if (j == 3)
		{
			if (s[i] != d[i])
			t[j]++;
		}
		else if (j == 4)
		{
			if (s[i] != e[i])
			t[j]++;
		}
		else if (j == 5)
		{
			if (s[i] != f[i])
			t[j]++;
		}
	}
}
	
	int j = distance(t,min_element(t, t + 6));

		if (j == 0)
		{
			cout<<t[j];
			string str(a.begin(),a.end());
			cout<<endl<<str;
		}
		else if (j == 1)
		{
			cout<<t[j];
			string str(b.begin(),b.end());
			cout<<endl<<str;
		}
		else if (j == 2)
		{
			cout<<t[j];
			string str(c.begin(),c.end());
			cout<<endl<<str;
		}
		else if (j == 3)
		{
			cout<<t[j];
			string str(d.begin(),d.end());
			cout<<endl<<str;
		}
		else if (j == 4)
		{
			cout<<t[j];
			string str(e.begin(),e.end());
			cout<<endl<<str;
		}
		else if (j == 5)
		{
			cout<<t[j];
			string str(f.begin(),f.end());
			cout<<endl<<str;
		}
	
	
	
	return 0;
}
