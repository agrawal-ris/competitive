#include <bits/stdc++.h>

using namespace std;

int main () {
	
	long long int n;
	string s;
	vector <string> t;
	long long int a[2] = {0};
	
	cin>>n;
	
	for (int i=0;i<n;i++)
	{
		int k = 1;
		cin>>s;
		
			for (int j = 0;j<t.size();j++)
		{
			if (s.compare(t[j]) == 0)
			{
				k = 0;
				a[j]++;
			}
		}
		
		if (k == 1)
		t.push_back(s);
	}
	
	if (a[0] >= a[1])
	cout<<t[0];
	else
	cout<<t[1];

	
	return 0;
}
	
	
	
	
	
	
