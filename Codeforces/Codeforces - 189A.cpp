#include <bits/stdc++.h>

using namespace std;


int main () {
	int a, b, c, n;
	
	cin>>n>>a>>b>>c;
	

	vector <int> ans(n+1,-1);
	
	ans[0] = 0;
	
	int a1 = 0, b1 = 0, c1 = 0;
	
	for (int i=1;i<=n;i++)
	{
		a1 = 0;
		b1 = 0;
		c1 = 0;
		int q = -1;
		
		if (i-a < 0 || ans[i-a] == -1)
		a1 = -1;
		else
		{
			a1 = ans[i-a] + 1;
		}
		if (i-b < 0 || ans[i-b] == -1)
		b1 = -1;
		else
		{
			b1 = ans[i-b] + 1;
		}
		if (i-c < 0 || ans[i-c] == -1)
		c1 = -1;
		else
		{
			c1 = ans[i-c] + 1;
		}
		
		q = max(q,a1);
		q = max(q,b1);
		q = max(q,c1);
		
		ans[i] = q;

	}
	

	cout<<ans[n];
	
	return 0;
}
