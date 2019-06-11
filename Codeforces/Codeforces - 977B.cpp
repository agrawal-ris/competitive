#include <bits/stdc++.h>

using namespace std;

int main () {
	
	long long int n;
	string s;
	
	cin>>n>>s;
	
	vector <string> t;
	string m;
	int f[100001] = {0};
	int max = 0, maxi = -1;
	for (int i = 0;i<n-1;i++)
	{
		int k = 0;
		string a;
		a += s[i];
		a += s[i+1];
		
	
		for (int j = 0;j<t.size();j++)
		{
			if (a.compare(t[j]) == 0)
			{
				k = 1;
				f[j]++;
				
				if (max < f[j])
				{
					max = f[j];
					maxi = j;
				}
			}
		}
		
		if ( k == 0 )		  
		   {
		   	t.push_back(a);
		   	f[t.size()-1]++;
		   	if (max < f[t.size()-1])
		   	 {
		   	 max = f[t.size()-1];
		   	 maxi = t.size()-1;
		    }
		   }
	}
	
	cout<<t[maxi];
	return 0;
}
	
	
	
	
	
	
