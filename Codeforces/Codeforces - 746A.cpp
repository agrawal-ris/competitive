#include <bits/stdc++.h>

using namespace std;

int main () {
	
	long long int a, b, c;
	
	cin>>a>>b>>c;
	
	long long int m;
	m = min(a,b/2);
	m = min(b/2,m);
	m = min(c/4,m);
	
	cout<<m*1+m*2+m*4;
	
	
	
	return 0;
	
}
