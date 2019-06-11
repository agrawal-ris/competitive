	#include <bits/stdc++.h>
	
	using namespace std;
	
	int main () {
		
		string a;
		long long int n,sum=0;
		
		cin>>n;
		
		for (int i = 0;i<n; i++)
		{
			cin>>a;
			
			if (a == "Tetrahedron")
			{
				sum += 4;
			}
			else if (a == "Cube")
			{
				sum += 6;
			}
			else if (a == "Octahedron")
			{
				sum += 8;
			}
			else if (a == "Dodecahedron")
			{
				sum += 12;
			}
			else if (a == "Icosahedron")
			{
				sum += 20;
			}
		}
		
		
		
		cout<<sum;
		
		
		
		
		
		
		return 0;
	}
