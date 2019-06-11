#include <bits/stdc++.h>

using namespace std;

int main () {
	string s,t;
	
	cin>>s;
	t = s;
	reverse(t.begin(),t.end());

	int c = 0,d = 0;
	
	for (int i=0;i<s.length();i++)
	{
		if (s.length() % 2 == 0)
		{
			if (s[i] != t[i])
			c++;
		}
		else
		{
			if (s[i] != t[i])
			{
				if (i == s.length()/2)
				d = 1;
				
				c++;
			}
			
		
		}
	}
	
	if (d == 1)
	c++;
	
	if (c == 2)
	{
		cout<<"YES";
	}
	else if (c == 0 && s.length() % 2 != 0)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
	
	
	return 0;
}
