#include <bits/stdc++.h>

using namespace std;

int main () {
	string s;
	cin>>s;
	int c = 0;
	int n = s.length();
	int b[100001] = {0};
	
	for (int i = 0;i<n;i++)
	{
		if (s[i] == '1' || s[i] == '3' || s[i] == '5' || s[i] == '7' || s[i] == '9')
		{

				c++;
			
		}
		else if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
		{
			c++;
		}
	}
	
	cout<<c;
	
	return 0;
}
