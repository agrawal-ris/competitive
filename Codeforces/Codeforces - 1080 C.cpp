#include <bits/stdc++.h>

using namespace std;

int main () {
	
	long long int t;
	cin>>t;
	long long int n,m;
	long long int x1,y1,x2,y2;
	long long int x3,y3,x4,y4;
	long long int cx1,cx2,cy1,cy2;
	long long int whiten,whitem,blackn,blackm,commonn,commonm;
	long long int x,y,z;
	
	long long int white = 0, black = 0;
	
	long long int whitewcount = 0, whitebcount = 0, blackwcount = 0, blackbcount = 0, commonwcount = 0, commonbcount = 0;
	for (int i=0;i<t;i++)
	{
		cin>>n>>m;
		cin>>x1>>y1>>x2>>y2;
		cin>>x3>>y3>>x4>>y4;
		
		if ((n*m) % 2 == 0)
		{
			white = (n*m)/2;
			black = (n*m)/2;
		}
		else
		{
			white = (n*m)/2 + 1;
			black = (n*m)/2;
		}
		
		whiten = abs(y2 - y1) + 1;
		whitem = abs(x2 - x1) + 1;
		blackn = abs(y4 - y3) + 1;
		blackm = abs(x4 - x3) + 1;
		
			if ((whiten*whitem) % 2 == 0)
		{
			if ((x1%2 == 1 && y1%2 == 1) || (x1%2 == 0 && y1%2 == 0))
			{
				whitewcount = (whiten*whitem) / 2;
				whitebcount = (whiten*whitem) / 2;
			}
			else
			{
				whitewcount = (whiten*whitem) / 2;
				whitebcount = (whiten*whitem) / 2;
			}
				
		}
		else
		{
			if ((x1%2 == 1 && y1%2 == 1) || (x1%2 == 0 && y1%2 == 0))
			{
				whitewcount = (whiten*whitem) / 2 + 1;
				whitebcount = (whiten*whitem) / 2;
			}
			else
			{
				whitewcount = (whiten*whitem) / 2;
				whitebcount = (whiten*whitem) / 2 + 1;
			}			
		}
		
		
			if ((blackn*blackm) % 2 == 0)
		{
			if ((x3%2 == 1 && y3%2 == 1) || (x3%2 == 0 && y3%2 == 0))
			{
				blackwcount = (blackn*blackm) / 2;
				blackbcount = (blackn*blackm) / 2;
			}
			else
			{
				blackwcount = (blackn*blackm) / 2;
				blackbcount = (blackn*blackm) / 2;
			}
				
		}
		else
		{
			if ((x3%2 == 1 && y3%2 == 1) || (x3%2 == 0 && y3%2 == 0))
			{
				blackwcount = (blackn*blackm) / 2 + 1;
				blackbcount = (blackn*blackm) / 2;
			}
			else
			{
				blackwcount = (blackn*blackm) / 2;
				blackbcount = (blackn*blackm) / 2 + 1;
			}			
		}
		
		if (x3 > x1)
		cx1 = x3;
		else
		cx1 = x1;
		
		if(y3 > y1)
		cy1 = y3;
		else
		cy1 = y1;
		
		if (x4 > x2)
		cx2 = x2;
		else
		cx2 = x4;
		
		if (y4 > y2)
		cy2 = y2;
		else
		cy2 = y4;
		
		commonn = abs(cy2 - cy1) + 1;
		commonm = abs(cx2 - cx1) + 1;
		
		
		if (x2 < x3 || y2 < y3)
		{
			commonwcount = 0;
			commonbcount = 0;
		}
		else if (x4 < x1 || y4 < y1)
		{
			commonwcount = 0;
			commonbcount = 0;
		}
		else
		{
					if ((commonn*commonm) % 2 == 0)
		{
			if ((cx1%2 == 1 && cy1%2 == 1) || (cx1%2 == 0 && cy1%2 == 0))
			{
				commonwcount = (commonn*commonm) / 2;
				commonbcount = (commonn*commonm) / 2;
			}
			else
			{
				commonwcount = (commonn*commonm) / 2;
				commonbcount = (commonn*commonm) / 2;
			}
				
		}
		else
		{
			if ((cx1%2 == 1 && cy1%2 == 1) || (cx1%2 == 0 && cy1%2 == 0))
			{
				commonwcount = (commonn*commonm) / 2 + 1;
				commonbcount = (commonn*commonm) / 2;
			}
			else
			{
				commonwcount = (commonn*commonm) / 2;
				commonbcount = (commonn*commonm) / 2 + 1;
			}			
		}
		}
		
	whitewcount -= commonwcount;
	whitebcount -= commonbcount;
	
	white += whitebcount;
	black -= whitebcount;
	
	white -= blackwcount;
	black += blackwcount;
	cout<<white<<' '<<black<<endl;
	}
	 	

	return 0;
}
