#include <bits/stdc++.h>

using namespace std;

int main () {
	
	long long int n, m;
	
	cin>>n>>m;
	
	if (n > 30)
	cout<<m;
	else
	{
		long long int d = pow(2,n);
		cout<<m % d; 
	}	
	
	
	
	
	
	return 0;
}
