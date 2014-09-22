#include <stdio.h>
#include <math.h>
using namespace std;
int main ()
{
	int n,a,b,i;
	double distance;
	while (scanf("%d",&n)!=EOF)
	{
		for (i=1;i<=n;i++)
		{
			scanf ("%d%d",&a,&b);
			if (a%2==1&&b%2==1)
			{
				distance=a*b-1+sqrt(2);
			}
			else distance=a*b;
			printf ("Scenario #%d:\n%.2lf\n\n",i,distance);
		}
	}
}
