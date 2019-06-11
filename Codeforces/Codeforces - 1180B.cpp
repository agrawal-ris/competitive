#include <bits/stdc++.h>

using namespace std;

int main () {
	
	int n, a[100005], b[100005] = {0};
	
	vector <int> c;
	cin>>n;
	
	for (int i = 0;i<n;i++)
	cin>>a[i];
	
	sort(a, a+n);
	
	for (int i = 0;i<n;i++)
	{
		if (b[a[i]] == 0)
		{
			if (a[n-1] % a[i] == 0)
			{
				b[a[i]] = 1;
			}
			else
			{
				c.push_back(a[i]);
			}
		}
		else
		{
			c.push_back(a[i]);
		}
	}
	
	int t = c.size();
	
	sort(c.begin(), c.end());
	
	cout<<a[n-1]<<' '<<c[t-1];
	
	
	
	
	
	
	
	return 0;
}
