#include <bits/stdc++.h>

using namespace std;

int main () {
	
	long long int q;
	long long int l,r;
	long long int sum = 0;
	cin>>q;
	for(int i=0;i<q;i++)
	{
		sum = 0;
		cin>>l>>r;
		
		if ((r-l+1) % 2 == 0)
		{
			if ((l % 2) == 0)
			{
				sum += (-1) * ((r-l + 1) / 2);
			}
			else
			{
				sum += ((r-l + 1) / 2);
			}
		}
		else
		{
			if ((l % 2) == 0)
			{
				sum += (-1) * ((r-l + 1) / 2) + r;
			}
			else	
			{
				sum += ((r-l + 1) / 2) - r;
			}
		}
		cout<<sum<<endl;
	}
	
	
	return 0;
}
