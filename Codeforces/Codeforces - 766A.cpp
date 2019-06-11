#include <bits/stdc++.h>

using namespace std;

int main () {
	string a, b;
	
	cin>>a>>b;
	
	if (a.length() > b.length())
	cout<<a.length();
	else if ((a.length() < b.length()))
	cout<<b.length();
	else
	{
		if (a.compare(b) == 0)
		cout<<"-1";
		else
		cout<<a.length();
	}
	
	
	
	return 0;
}
