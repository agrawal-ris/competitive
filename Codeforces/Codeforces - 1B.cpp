#include <bits/stdc++.h>

using namespace std;

int main() {
	
	long long int n;
	string s;
	
	cin>>n;
	
	for (long long int i = 0;i<n;i++)
	{
		cin>>s;
		
		long long int t = s.length();
		long long int f = 0;
		long long int a = 0;
		long long int b = 0;
		long long int k = 1;
		
		for (int i = 0;i<t;i++)
		{
			if (s[i] == 'C')
			f = 1;
			
		}
		if (s[0] == 'R' && s[1] - '0' >= 0 && s[1] - '0' <= 9 && f == 1)
		{
			while(s[k] != 'C')
			{
				a = a * 10 + s[k] - '0';		
				k++;
			}
			
			for (long long int j = k+1; j<s.length();j++)
			{
				b = b * 10 + s[j] - '0';
			}
			
			string q;
			
			while(b != 0)
			{
				long long int a1 = b % 26;
				long long int u = 0;
				if (a1 == 0)
				{
						a1 = 26;
						u = 1;
						
				}
				char b1 = 'A' + a1 - 1; 
				q = b1 + q;
				
				b = b / 26;
				
				if (u == 1)
				b--;
				
		
			}
			
			cout<<q<<a;
		}
		else
		{
			string q;
			long long int c = 0;
			long long int k1 = 0;
			while ((s[c] - '0' < 0 || s[c] - '0' > 9))
			{
				char z = s[c] - 'A' + 1;
				k1 = k1 * 26 + z;
				c++;
			}
			
			long long int k2 = 0;
	
			for (long long int j = c; j<s.length();j++)
			{
				k2 = k2 * 10 + s[j] - '0';
			}
			
			cout<<'R'<<k2<<'C'<<k1;
		}
		
		cout<<endl;

	}
	

	

	return 0;
}
