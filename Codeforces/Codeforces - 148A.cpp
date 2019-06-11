#include <bits/stdc++.h>

using namespace std;

int main () {
	long long int k, l, m, n, d;
	
	cin>>k>>l>>m>>n>>d;
	long long int ans = 0;
	vector <int> a(d+1, 0);
	
	for (int i = 1;i<=d;i++)
	{
		if (i % k == 0)
		a[i] = 1;
		else if (i % l == 0)
		a[i] = 1;
		else if (i % m == 0)
		a[i] = 1;
		else if (i % n == 0)
		a[i] = 1;
		
		if (a[i] == 1)
		ans++;
	}
		
	
	
	cout<<ans;
	
	
	
	
	
	return 0;
}
