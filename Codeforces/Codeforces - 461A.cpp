#include <bits/stdc++.h>

using namespace std;

int main () {
	long long int n, sum = 0,total = 0;
	
	vector <int> a;
	cin>>n;
	int z;
	for (int i=0;i<n;i++)
	{
		cin>>z;
		a.push_back(z);
		sum+=a[i];
	}
	
	sort(a.begin(),a.end());
	
	total += sum;
	for (int i = 0;i<n;i++)
	{
		sum -= a[i];
		total += sum + a[i];
	}
	
	total -= a[n-1];
	cout<<total;
	
	
	
	return 0;
}
