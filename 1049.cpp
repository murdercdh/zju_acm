#include <iostream.h>
#include <math.h>
void main ()
{
	int n,i,j;
	double x,y,dis,r,area;
	while (cin>>n)
	{
		for (i=1;i<=n;i++)
		{
			cin>>x>>y;
			dis=sqrt(x*x+y*y);
			area=0;
			for (j=1;;j++)
			{
				area+=100;
				r=sqrt(area/3.14);
				if (r>=dis) 
				{
					cout<<"Property "<<i<<": This property will begin eroding in year "<<j<<"."<<endl;
					break;
				}
			}
		}
		cout<<"END OF OUTPUT."<<endl;
	}
}
