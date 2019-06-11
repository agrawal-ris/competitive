#include <bits/stdc++.h>

using namespace std;

int main () {
	long long int n;
	vector <long long int> a;
	
	cin>>n;
	
	int b;
	for (int i = 0;i<n;i++)
	{
		cin>>b;
		a.push_back(b);	
	}
	
	long long int m = a[n-1];
	long long int ans = a[n-1];
	for (int i = n-2;i>=0;i--) {
		int c = min(m-1, a[i]);
		m = c;
		ans += m;
		
		if (m == 0)
		break;
	}
	
	cout<<ans;
	
	
	
	
	return 0;
}
