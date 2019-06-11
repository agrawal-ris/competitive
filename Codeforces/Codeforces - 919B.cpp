#include <bits/stdc++.h>

using namespace std;

int main() {
	long long int n;
	
	cin>>n;
	
	long long int c = 0, d = 0,num = 0;
	
	while(c!=n) {
		d++;		
		int e = d;
		num = 0;
		while (e!=0)
		{
			num += e%10;
			e = e / 10;
		}
		
		if (num == 10)
		c++;
		

	} 
	
	cout<<d;
	
	return 0;
}
