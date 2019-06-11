#include <bits/stdc++.h>

using namespace std;

int main () {
	string a;
	cin>>a;
	
	int n = a.length();
	int b[1000] = {0};
	int current = 0;
	for (int i = 0;i < n; i++)
	{
		if (a[i] == 'Q')
		{
			current++;
		}
		b[i] = current;
	}
	
	long long int ans = 0;
	
	for (int i = 1;i < n; i++)
	{
		if (a[i] == 'A')
		{
			ans += b[i-1] * (current - b[i-1]);
		}
	}
	
	cout<<ans;
	
	
	
	
	return 0;
}
