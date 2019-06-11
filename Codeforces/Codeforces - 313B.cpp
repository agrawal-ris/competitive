#include <bits/stdc++.h>

using namespace std;

int main () {
	string s;
	
	cin>>s;
	
	int n = s.length();
	int a[n] = {0}, b[n] = {0};
	
	for (int i=0;i<n-1;i++)
	{
		if (s[i] == s[i+1])
		a[i] = 1;
	}
	
	b[0] = a[0];
		for (int i=1;i<n;i++)
	{
		b[i] = a[i] + b[i-1];
	}
	
	int q;
	
	cin>>q;
	
	int l, r;
	
	for (int i=0;i<q;i++)
	{
		cin>>l>>r;
		
		cout<<b[r-2]-b[l-1]+a[l-1]<<endl;
	}
	
	
	
	
	
	
	
	return 0;
}
