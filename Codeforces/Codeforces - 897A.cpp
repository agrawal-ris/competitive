#include <bits/stdc++.h>

using namespace std;

int main () {
	int n, m;
	
	cin>>n>>m;
	
	string s;
	
	cin>>s;
	
	for (int i = 0;i<m;i++)
	{
		int l, r;
		char c1,c2;
		
		cin>>l>>r>>c1>>c2;
		
		for (int j = l-1;j<=r-1;j++)
		{
			char t = s[j];
			if (t == c1)
				s[j] = c2;
		}
	}
	
	cout<<s;
	
	
	


	return 0;	
}
