#include <iostream.h>
#include <stdio.h>
#include <math.h>
void main ()
{
	float x1,y1,r1,x2,y2,r2,x,y,distance,t;
	int test,i;
	while (cin>>test)
	{
		for (i=0;i<test;i++)
		{
			cin>>x1>>y1>>r1>>x2>>y2>>r2;
			distance=(float)sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
			if (distance<=fabs(r1-r2)||r1==r2) {cout<<"Impossible."<<endl;continue;}
			else
			{
				if (r1<r2) {t=x1;x1=x2;x2=t;t=y1;y1=y2;y2=t;t=r1;r1=r2;r2=t;}//r1Òª´óÓër2
				x=(r1*x2-r2*x1)/(r1-r2);y=(r1*y2-r2*y1)/(r1-r2);
				printf ("%.2f %.2f\n",x,y);
			}
		}
	}
}
