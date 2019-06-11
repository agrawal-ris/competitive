#include <bits/stdc++.h>

using namespace std;

long long int bsearch(vector <int> d, long long int start, long long int end, long long int q) {
	if (q < d[start])
	return -1;
	else if (q >= d[end])
	return end;
	else
	{
		long long int mid = (start + end) / 2;
		
		if (d[mid] == q)
		{
			return mid; 
		}
		else if (q < d[mid])
		{
			if (q > d[mid-1])
			{
				return mid-1;
			}
			else
			return bsearch(d, start, mid, q);
		}
		else
		{
			if (q < d[mid+1])
			{
				return mid;
			}
			else
			return bsearch(d, mid, end, q);
		}
	}
}

int main() {
	long long int n,sum=0,z;
	cin>>n;
	long long int a[n],b[n];
	
	cin>>a[0];
	b[0] = a[0];
	sum+= a[0];
	for (int i=1;i<n;i++)
	{
		cin>>a[i];
		b[i] = a[i] + b[i-1];
		sum+=a[i];
	}
	
	if (sum % 3 != 0)
	cout<<0;
	else
	{
	
	long long int z = sum/3;
	
	long long int ans = 0;
	
	vector <int> c, d;
	
	for (int i = 0;i<n-1;i++)
	{
		if (b[i] == z)
		c.push_back(i);
		if(b[i] == 2*z)
		d.push_back(i);
	}
	
	int size1 = c.size(), size2 = d.size();
	

	for (int i = 0;i < size1;i++)
	{
		
		z = bsearch(d,0,size2-1,c[i]);
		
		if (d[z] >= c[i])
		{
			ans += size2 - (z+1);
		}
	}
	
	
	cout<<ans;
	
	}	
	
	
	
	return 0;
}
