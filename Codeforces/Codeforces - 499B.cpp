#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,m,a[100001] = {0};
	cin>>n>>m;
	
	string a1, a2, q;
	
	map <string, string> map1, map2;
	map <string, int> map3, map4;
	
	for (int i=0;i<m;i++)
	{
		cin>>a1>>a2;
		
			map1[a1] = a2;
			map2[a2] = a1;
			map3[a1] = i;
			map3[a2] = i;
			map4[a1] = 1;
			map4[a2] = 2;
		
		if (a2.length() < a1.length())
		a[i] = 2;
		else
		a[i] = 1;	
			
	}
	
	for(int i=0;i<n;i++)
	{
		cin>>q;
		if (a[map3[q]] == 2)
		{
			if (map4[q] == 2)
			cout<<q<<' ';
			else
			cout<<map1[q]<<' ';
		}
		else
		{
			if (map4[q] == 1)
			cout<<q<<' ';
			else
			cout<<map2[q]<<' ';
		}
		
	}
	
	
	
	
	
	return 0;
}
