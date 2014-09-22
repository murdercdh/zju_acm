//S=根号<p*(p-a)*(p-b)(p-c)> 其中p=(a+b+c)/2
#include <iostream.h>
#include <stdio.h>
#include <math.h>
void main ()
{
	double x1,y1,z1,x2,y2,z2,x3,y3,z3;
	double r1,r2,a,b,c,s,p;
	while (cin>>x1>>y1>>z1>>x2>>y2>>z2>>x3>>y3>>z3)
	{
		a=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)+(z1-z2)*(z1-z2));
		b=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3)+(z1-z3)*(z1-z3));
		c=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2)+(z3-z2)*(z3-z2));
		p=(a+b+c)/2;
		s=sqrt(p*(p-a)*(p-b)*(p-c));
		r1=a*b*c/(s*4);//cout<<r1;
		r2=s/p;//经典
		printf ("%.3f\n",r2*r2/(r1*r1));
	}
}