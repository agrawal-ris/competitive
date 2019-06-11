#include <bits/stdc++.h>

using namespace std;

int main() {
	long double n, m;
	cin>>n>>m;
	long double min = 999999;
	for (int i = 0;i<n;i++)
	{
		long double a, b;
		
		cin>>a>>b;
		
		if ((a/b) * m < min)
		min = (a/b) * m;
	}
	
	cout<<fixed << setprecision(10) << min;
		
	
	
	
	
	
	
	return 0;
}
