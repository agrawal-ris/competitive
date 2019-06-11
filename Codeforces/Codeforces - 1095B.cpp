
#include <bits/stdc++.h>

using namespace std;

int main () {	

long long int n, a[100001];

cin>>n;

for (int i=0;i<n;i++)
cin>>a[i];

sort(a,a+n);

int a1 = a[1] - a[0];
int a2 = a[n-1] - a[n-2];

if (a2 >= a1)
{
	cout<<a[n-2] - a[0];
}
else
{
	cout<<a[n-1] - a[1];
}

 
return 0;
}
