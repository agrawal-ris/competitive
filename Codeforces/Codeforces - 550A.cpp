
#include <bits/stdc++.h>

using namespace std;

int main () {
	string s;
	
	cin>>s;
	
	int n = s.length();
	
	int pab1 = -1;
	int pba1 = -1;
	int pab2 = -1;
	int pba2 = -1;
	
	for (int i=0;i<n-1;i++)
	{
		if (s[i] == 'A' && s[i+1] == 'B')
		{
			pab1 = i;
			break;
		}
	}
	
		for (int i=0;i<n-1;i++)
	{
			if (s[i] == 'B' && s[i+1] == 'A')
		{
			pba1 = i;
			break;
		}
	}
	
		for (int i=n-1;i>0;i--)
	{
		if (s[i] == 'B' && s[i-1] == 'A')
		{
			pab2 = i-1;
			break;
		}
	}
	
			for (int i=n-1;i>0;i--)
	{
		if (s[i] == 'A' && s[i-1] == 'B')
		{
			pba2 = i-1;
			break;
		}
	}
	
	if (pab1 == -1 || pab2 == -1 || pba1 == -1 || pba2 == -1)
	cout<<"NO";
	else
	{
		if (pba2 > pab1 + 1)
		cout<<"YES";
		else if (pab2 > pba1 + 1)
		cout<<"YES";
		else
		cout<<"NO"; 
	}
	
	
	return 0;
}
