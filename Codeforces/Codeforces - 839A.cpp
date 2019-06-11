#include <bits/stdc++.h>

using namespace std;

int main() {
	long long int n, k, a[10005];
	
	cin>>n>>k;
	
	long long int d = 0, tot = 0;
	
	for (int i = 0;i<n;i++)
	{
		cin>>a[i];
	}
	
	long long int sum = 0;
	for (int i = 0;i<n;i++)
	{
		sum += a[i];
		if (tot < k)
		d++;
		if (sum > 8)
		{
			tot += 8;
			sum -= 8;
		}
		else
		{
			tot += sum%9;
			sum = 0;
		}
	}
	if (tot >= k)
	cout<<d;
	else
	cout<<-1;




return 0;
}
