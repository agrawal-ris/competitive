#include <bits/stdc++.h>

using namespace std;

long long int bsearch(long long int x[], long long int start, long long int end, long long int m) {
	if (m < x[start])
	return start-1;
	else if (m >= x[end])
	return end;
	else
	{
		long long int mid = (start + end) / 2;
		
		if (m >= x[mid]){
			if (m < x[mid+1])
			return mid;
			else
			return bsearch(x, mid, end, m);
		}
		else
		{
			if (m >= x[mid-1])
			return mid-1;
			else
			return bsearch(x, start, mid, m);
		}
	}
}

int main () {
	
	long long int n, x[100001], q, m;
	
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		cin>>x[i];
	}
	
	cin>>q;
	
	sort(x, x+n);
	
	for (int i=0;i<q;i++)
	{
		cin>>m;
		
		cout<<bsearch(x, 0, n-1, m) + 1<<endl;
	}
	
	
	
	
	
	
	
	
	
	
	return 0;
}
