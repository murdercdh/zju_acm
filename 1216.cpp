#include <stdio.h>
void main ()
{
	int n,i;
	double res;
	printf ("# Cards  Overhang\n");
	while (EOF!=scanf("%d",&n))
	{
		res=0;
		for (i=1;i<=n;i++)
		{
			res+=1/(2.0*i);
		}
		printf ("%5d%10.3lf\n",n,res);
	}
}