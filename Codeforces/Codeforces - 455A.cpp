#include <bits/stdc++.h>

using namespace std;

vector <int> bore(100001, -1);

long long int boredom(long long int a[], long long int n) {
	if (bore[n] > -1)
	{
		return bore[n];
	}
	else
	{
		if (n == 0)
		{
			bore[n] = 0;
			return 0; 
		}		
		else if (n == 1)
		{
			bore[n] = 1*a[1];
			return 1*a[1];
		}
		else
		{
			int z;
			z = max(n*a[n] + boredom(a, n-2), boredom(a, n-1));
			
			bore[n] = z;
			
			return z;
		}
	}	
}




int main () {
	long long int a[100001] = {0}, n;
	
	cin>>n;
	
	int z;
	
	int maxi = 0;
	
	for(int i=0;i<n;i++)
	{
		cin>>z;
		
		a[z]++;	
		
		if (z > maxi)
		maxi = z;
	}
	
	long long int ans[100001] = {0};
	ans[1] = a[1];
	
	for (int i=2;i<=maxi;i++) {
		ans[i] = max(ans[i-2] + i*a[i], ans[i-1]);
	}
	
	cout<<ans[maxi];
	

	
	
	
	
	
	
	
	
	
}
