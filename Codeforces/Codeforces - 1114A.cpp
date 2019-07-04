#include <bits/stdc++.h>

using namespace std;

int main () {
	int x, y, z, a, b, c;
	
	cin>>a>>b>>c>>x>>y>>z;
	
	if (x < a) {
		cout << "NO";
	}
	else
	{
		x = x - a;
		if (x+y < b) {
			cout<<"NO";
		}
		else
		{
			y = x+y;
			y = y - b;
			
			if (y+z < c)
			{
				cout<<"NO";
			}
			else
			{
				cout<<"YES";
			}
		}
	}
	
	
	return 0;
}
