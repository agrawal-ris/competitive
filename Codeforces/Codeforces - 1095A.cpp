
#include <bits/stdc++.h>

using namespace std;

int main () {	

int n;
string s;

cin>>n>>s;

int c = 1;

while((c*(c+1))/2 <= n)
{
	int z = (c*(c+1))/2;
	cout<<s[z-1];
	c++;
}
 
return 0;
}
