#include <bits/stdc++.h>

using namespace std;


int main () {
	
	string a;
	cin>>a;
	a += 'A';
	a = 'A' + a; 
	int n = a.length();
	int m = 0;
	int z[100000] = {0};
	int c = 0;
	
	for (int i = 0;i<n;i++)
	{
		if (a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U' || a[i] == 'Y' )
		{
			z[c++] = i;
		}
	}
	
	for (int i = 0;i<c-1;i++)
	{
		if (z[i+1] - z[i] > m)
		m = z[i+1] - z[i];
	}
	
	cout<<m;
	
	return 0;
}
