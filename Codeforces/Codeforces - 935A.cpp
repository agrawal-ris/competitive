#include <bits/stdc++.h>

using namespace std;

int main () {
	long long int n;
	cin>>n;
	long long int c = 0;
	
	for (int i = 1;i<=n-1;i++)
	{
		if (n % i == 0)
		c++;
	} 
	
	cout<<c;	
	
	return 0;
}
