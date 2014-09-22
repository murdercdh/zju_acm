#include <stdio.h>
#include <math.h>
void main ()
{
	double x1,y1,x2,y2,r1,r2;
	double a,b,side,s1,s2,side2,s;
	while (EOF!=scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&r1,&x2,&y2,&r2))
	{
		side2=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
		side=sqrt(side2);
		if (side>=r1+r2) {printf ("0.000\n");continue;}
		else if (side<=fabs(r1-r2))
		{
			s=r1<r2?r1:r2;
			s=3.1415927*s*s;
			printf ("%.3lf\n",s);
			continue;
		}
		s=(side+r1+r2)*.5;
		a=acos((r1*r1+side2-r2*r2)/(2*r1*side));
		b=acos((r2*r2+side2-r1*r1)/(2*r2*side));
		s=sqrt(s*(s-r1)*(s-r2)*(s-side));
		s1=r1*r1*a*.5;
		s2=r2*r2*b*.5;
		s=s1+s2-s;
		printf ("%.3lf\n",2*s);
	}
}