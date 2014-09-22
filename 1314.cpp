#include <stdio.h>
void main ()
{
	int step,mod,i,temp;
	while (scanf("%d%d",&step,&mod)!=EOF)
	{
		temp=0;
		for (i=1;;i++)
		{
			temp=(temp+step)%mod;
			if (temp==0) break;
		}
		if (i==mod) printf ("%10d%10d    Good Choice\n\n",step,mod);
		else printf ("%10d%10d    Bad Choice\n\n",step,mod);
	}
}
