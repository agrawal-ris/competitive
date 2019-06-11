
#include <bits/stdc++.h>

using namespace std;

int main () {	

long long int n, k;

cin>>n>>k;

vector <long long int> a(k,1);
long long int c = 1;
long long int z = 0;

if (k > n)
cout<<"NO";
else
{
	long long int sum = n;
	long long int currentsum = k;
	long long int chin = 0;
	for (int i=0;i<k;i++)
	{
		while(currentsum <= sum)
		{

			if (currentsum + a[i] <= sum)
			{
				currentsum += a[i];
				a[i] = a[i]*2;				
			}
			else
			{
				break;
			}
		}
		

		chin += a[i];
	}
	
	if (chin != sum)
	{
		cout<<"NO";
	}
	else
	{
		cout<<"YES"<<endl;
		for (int i=0;i<k;i++)
		cout<<a[i]<<' ';
	}
}

return 0;
}
