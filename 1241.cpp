#include <stdio.h>
#include <math.h>
void main ()
{
	int i;
	float a,b,c;
	i=1;
	while (scanf("%f%f%f",&a,&b,&c)!=EOF)
	{
		if (a==0&&b==0&&c==0) break;
		if (c==-1) {printf ("Triangle #%d\nc = %.3f\n\n",i,sqrt(a*a+b*b));i++;continue;}
		if (a==-1)
		{
			printf ("Triangle #%d\n",i);
			if (b>=c) {printf ("Impossible.\n\n");i++;continue;}
			else {printf ("a = %.3f\n\n",sqrt(c*c-b*b));i++;continue;}
		}
		if (b==-1)
		{
			printf ("Triangle #%d\n",i);
			if (a>=c) {printf ("Impossible.\n\n");i++;continue;}
			else {printf ("b = %.3f\n\n",sqrt(c*c-a*a));i++;continue;}
		}
	}
}