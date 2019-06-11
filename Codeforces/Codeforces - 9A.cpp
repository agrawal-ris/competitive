#include <bits/stdc++.h>

using namespace std;

int main () {
	
	long long int y, w;
	
	cin>>y>>w;
	
	long long int a = max(y,w);
	
	a =  7 - a;
	
	long long int num = a, den = 6;
	if (a % 2 == 0 && den % 2 == 0)
	{
		a = a/2;
		den = den/2;
	}
	
	if (a % 3 == 0 && den % 3 == 0)
	{
		a = a/3;
		den = den/3;
	}
	
	cout<<a<<'/'<<den;
	
	return 0;
}
