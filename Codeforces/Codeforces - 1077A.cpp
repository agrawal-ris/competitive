#include <bits/stdc++.h>

using namespace std;

int main() {
	long long int n, a, b ,k;
	
	cin>>n;
	
	for (int i = 0;i<n;i++)
	{
		cin>>a>>b>>k;
		
		if (k % 2 == 0)
		{
			cout<<a*(k/2) - b*(k/2)<<endl;
		}
		else
		{
			cout<<a*(k/2) - b*(k/2) + a<<endl;
		}
	}
	
	
	
	
	
	
	
	
	
	
	return 0;
}
