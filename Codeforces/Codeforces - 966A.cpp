#include <bits/stdc++.h>

using namespace std;

int main() {
	long long int n;
	
	cin>>n;
	
	cout<< (n/100) + ((n%100)/20) + ((n%20)/10) + ((n%10)/5) + ((n%5)/1);
	
	
	
	
	
	
	return 0;
}
