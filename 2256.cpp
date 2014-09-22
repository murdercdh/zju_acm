#include <iostream.h>
#include <iomanip.h>
#include <stdio.h>
void main ()
{
	unsigned leg,n;
	double cost;
	while (cin>>leg)
	{
		if (leg==0) break;
		if (leg<=4) {cout<<"10"<<endl;continue;}
		cost=(leg/8)*18;
		n=leg%8;
		if (n==0) {printf ("%.0lf\n",cost);continue;}
		else
		{
			if (n<=4) {cost+=2.4*n;printf ("%.1lf\n",cost);}
			else {cost+=10+(n-4)*2;printf("%.0lf\n",cost);}
		}
	}
}
