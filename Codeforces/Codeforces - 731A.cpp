#include <bits/stdc++.h>

using namespace std;

int main () {
	string s;
	int n;
	cin>>s;
	n = s.length();
	
	int previous = 1;
	int current = 1;
	int ans = 0;
	char a;
	int c = 0;
	int f = 0, g = 0;
	for (int i = 0;i<n;i++)
	{
		a = s[i];
		c = a - 96;
		
		if (c > previous)
		{
			f = abs(c - previous);
			g = previous - 1 + 26 - c + 1;
			ans += min(f,g);
		}
		else if (c < previous)
		{
			f = abs(c - previous);
			g = 26 - previous + c;
			ans += min(f,g);
		}
	
		
		
		previous = c;
		
	}
	
	
	
	cout<<ans;
	
	
	
	
	
	return 0;
}
