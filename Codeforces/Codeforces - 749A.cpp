#include <bits/stdc++.h>

using namespace std;

int main() {
	long long int n;
	
	cin>>n;
	
	if (n % 2 == 0)
	{
		cout<<n/2<<endl;
		while(n>0)
		{
			cout<<2<<' ';
			n-=2;
		}
	}
	else
	{
		n = n - 3;
		cout<<1 + n/2<<endl;
		while(n>0)
			{
				cout<<2<<' ';
				n-=2;
			}
		cout<<3;
	}
	
	
	
	return 0;
}
