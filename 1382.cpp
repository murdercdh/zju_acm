#include <stdio.h>
#include <math.h>
void main ()
{
	int d,n,o,p,t,m;
	scanf("%d",&n);
	while (n)
	{
		n--;
		scanf("%d",&d);
		t=(int)sqrt(d);
		for (o=1;o<=d;o+=2)
		{
			m=1;
			for (p=0;p<=t;p++)
			{
				if(d==o*m)
				{
					printf ("%d %d\n",o,p);
					goto end;
				}
				m*=2;
			}
		}
end:;
	}
}