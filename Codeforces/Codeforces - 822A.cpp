#include <bits/stdc++.h>

using namespace std;

int main () {
	int a, b, c;
	
	cin>>a>>b;
	
	c = min(a,b);
	
	long long int ans = 1;
	long long int d = 1;	
	while(d <= c)
	{
		ans = ans * d;
		d++;
	}
	
	cout<<ans;
	
	
	
	
}
