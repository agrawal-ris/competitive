#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, a[1000];
	
	cin>>n;
	
	int c = 0;
	
	for (int i = 0; i < n; i++)
	{
		cin>>a[i];
		
		if (a[i] == 1)
		c = 1;
	}
	
	if (c == 1)
	cout<<"HARD";
	else
	cout<<"EASY";
	
	
	
	
	return 0;
}
