#include <stdio.h>
#include <math.h>
#include <algorithm>
using namespace std;
void main ()
{
	int n,a[100],i;
	double temp;
	while (EOF!=scanf("%d",&n))
	{
		for (i=0;i<n;i++) scanf("%d",&a[i]);
		if (n!=1)
		{
			sort (a,a+n);
			//for (i=0;i<n;i++) printf ("%d ",a[i]);
			temp=2*sqrt(a[n-1]*a[n-2]);
			for (i=n-3;i>=0;i--)
			{
				temp=2*sqrt(temp*a[i]);
			}
			printf ("%.3lf\n",temp);
		}
		else printf ("%.3lf\n",(double)a[0]);
	}
}