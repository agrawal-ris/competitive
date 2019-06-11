#include <bits/stdc++.h>

using namespace std;

int main() {
	
	long long int y, b, r;
	
	cin>>y>>b>>r;
	
	if (y <= b && y <= r)
	{
		if (r > b)
		{
			if (b > y)
			{
				cout<<y + y + 1 + y + 2;
			}
			else if (b == y)
			{
				cout<<y - 1 + y + y + 1;
			}
		}
		else if (r == b)
		{
			
			if (b == y + 1)
			{
				cout<<y - 1 + y + y + 1;
			}
			else if (b == y)
			{
				cout<<y - 2 + y - 1 + y;
			}
			else if (b > y + 1)
			{
				cout<<y + y + 1 + y + 2;
			}
		}
		else if (r < b)
		{
			if (y == r)
			{
				cout<<r - 2 + r - 1 + r;
			}
			else if (y+1 == r)
			{
				cout<<y-1 + y + y+1;
			}
			else
			{
				cout<<y+2 + y+1 + y;
			}
		}
	}
	else if (b <= y && b <= r)
	{
		if (r > b)
		{
			cout<<b + b - 1 + b + 1;
		}
		else
		{
			cout<<b - 1 + b - 2 + b;	
		}
		
	}
	else
	{
		cout<<r + r - 1 + r - 2;
	}


	return 0;
}
