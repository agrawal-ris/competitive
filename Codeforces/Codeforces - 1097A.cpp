#include <bits/stdc++.h>

using namespace std;

int main () {
	string s, t;
	
	cin>>t;
	
	int c = 0;
	
	for (int i = 0;i<5;i++)
	{
		cin>>s;
		
		if (s[0] == t[0] || s[1] == t[1])
		c = 1;
	}
	
	
	if (c==1)
	cout<<"YES";
	else
	cout<<"NO";	
	
	
	
	
	
	
	return 0;
}
