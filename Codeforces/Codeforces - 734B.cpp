#include <iostream>

using namespace std;

int main () {
	long long int k2,k3,k5,k6;
	
	cin>>k2>>k3>>k5>>k6;
	
	long long int q = 9999999999;
	
	q = min(q,k2);
	q = min(q,k5);
	q = min(q,k6);
	
	long long int sum = 0;
	
	sum += 256*q;
	
	k2 = k2 - q;
	
	q = 9999999999;
	
	q = min(q,k2);
	q = min(q,k3);
	
	sum += 32*q;
	
	cout<<sum;
	
	
	
	
	
	return 0;
}
