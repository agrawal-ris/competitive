#include <bits/stdc++.h>

using namespace std;

int main() {
	long long int x1, y1;
	
	cin>>x1>>y1;
	
	long long int steps = 0, x = 0, y = 0;
	
	while (x1 != x || y1 != y)
	{
		int k = steps % 6;
		
		if (k == 0)
		{
			x++;
		}
		else if (k == 1)
		{
			y++;
		}
		else if (k == 2)
		{
			x *= -1;
		}
		else if (k == 3)
		{
			y *= -1;
		}
		else if (k == 4)
		{
			x *= -1;
			x++;
		}
		else if (k == 5)
		{
			y *= -1;
			y++;
		}
		
		steps++;
	}
	cout<<steps;
	

	return 0;
}
