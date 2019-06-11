#include <bits/stdc++.h>

using namespace std;

int main() {
	long long int n,a,b,c,d;
	long long int total[100005] = {0};
	cin>>n;
	
	for (int i = 0;i<n;i++)
	{
		cin>>a>>b>>c>>d;
		total[i] = a+b+c+d;
	}	
	
	long long int thomas = total[0];
	
	sort(total, total+n);
	
	for (int i = n-1;i>=0;i--)
	{
		if (total[i] == thomas)
		{
			cout<<n - i;
			break;
		}
	}
	
	
	
	return 0;
}
