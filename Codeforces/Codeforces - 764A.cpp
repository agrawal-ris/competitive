#include <bits/stdc++.h>

using namespace std;

int main () {
	long long int n,m,z;
	
	cin>>n>>m>>z;
	
	cout<<z / ((n*m)/__gcd(n,m));
	
	
	
	return 0;
}
