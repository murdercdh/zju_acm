#include <stdio.h>
#include <math.h>
void main()
{
	int n;
	double vs,r,c,vr,w;
	scanf("%lf%lf%lf%d",&vs,&r,&c,&n);
	while (n)
	{
		n--;
		scanf("%lf",&w);
		vr=r/sqrt(r*r+(1/w/c)*(1/w/c));
		printf ("%.3lf\n",vr);
	}
}
