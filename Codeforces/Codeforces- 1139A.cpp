#include <bits/stdc++.h>

using namespace std;

int main () {
	int n;
	string s;
	cin>>n;
	cin>>s;
	int ans = 0;
	for (int i = 0;i<n;i++)
	{
		char a = s[i] - '0';
		int b = a;
		if (b % 2 == 0)
		{
			ans += (i+1);
		}
	}
	
	cout<<ans;
	
	
	
	
	
	return 0;
}
