#include <bits/stdc++.h>

using namespace std;

long long int bsearch (long long int a[], long long int start, long long int end, long long int q)
{
	if (q == a[end])
	return end;
	else if (q < a[start])
	return start;
	else if (q == a[start])
	return start;
	else
	{
		long long int mid = (start + end) / 2;
		
		if (a[mid] > q)
		{
			if (q > a[mid-1])
			return mid;
			else
			return bsearch(a, start, mid, q);	
		}
		else if (q == a[mid])
		return mid;
		else
		{
			if (q < a[mid+1])
			return mid+1;
			else
			return bsearch(a, mid, end, q);	
		}
	}
}

int main () {
	long long int n, a[100005], b[100005] = {0}, m, q;
	
	cin>>n;
	
	for (int i = 0;i < n;i++)
	{
		cin>>a[i];
		
	}
	
	b[0] = a[0];
	
	for (int i = 1;i < n;i++)
	{
		b[i] = a[i] + b[i-1];
		
	}
	
	cin>>m;
	
	for (int i = 0;i < m;i++)
	{
		cin>>q;
		
		cout<<bsearch(b, 0, n-1, q) + 1<<endl;	
	}
	
	return 0;
}
