#include <bits/stdc++.h>

using namespace std;

int main () {
	long long int s, v1, v2, t1, t2;
	
	cin>>s>>v1>>v2>>t1>>t2;
	
	if (t1 + v1*s + t1 < t2 + v2*s + t2)
	{
		cout<<"First";
	}
	else if (t1 + v1*s + t1 > t2 + v2*s + t2)
	{
		cout<<"Second";
	}
	else
	{
		cout<<"Friendship";
	}
	
	
	
	
	return 0;
}
