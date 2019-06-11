#include <bits/stdc++.h>

using namespace std;

int checkcom(string w,string s,int n,int m) {
	if (n > m)
	{
		return 0;
	}
	else
	{
		int k = 0;
		for (int i = 0;i<m;i++)
		{
			if (w[k] == s[i])
			{
				k++;
			}
			
			if (k == n)
			break;
		}
		
		if (k == n)
		return 1;
		else
		return 0;
	}
}

int main () {
	int n;
	int a[100000];
	int b[100000];
	string s;
	vector <string> w;
	cin>>s;
	
	int t = s.length();
	for (int i = 0;i<t;i++)
	{
		a[i] = s[i] - '0';
	}	
	
	for (int i = 0;i<=124;i++)
	{
		b[i] = i * 8;
		stringstream ss;
		ss << b[i];
		string c = ss.str();
		w.push_back(c);
	}
	

	int k = 0;
	for (int i = 0;i<=124;i++)
	{

		if (checkcom(w[i],s,w[i].length(),s.length()) == 1)
		{
			k = 1;
			cout<<"YES"<<endl;
			cout<<w[i];
			break;
		}
	}
	
	if (k == 0)
	cout<<"NO";
	
	return 0;
}
