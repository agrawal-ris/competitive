#include <bits/stdc++.h>

using namespace std;

int main () {
	int n, l1, r1, l2 , r2;
	
	cin>>n;
	
	for (int i = 0;i<n;i++)
	{
		cin>>l1>>r1>>l2>>r2;
		
		if (r1 != r2)
		cout<<r1<<' '<<r2;
		else
		cout<<l1<<' '<<r2;
		
		cout<<endl;
	}
	
	
	
	
	
	
	
	return 0;
}
