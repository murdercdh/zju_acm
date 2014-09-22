#include <stdio.h>
#include <math.h>
void main ()
{
	int n,i,test;
	double die;
	while (scanf("%d",&test)!=EOF)
	{
		while(test)
		{
			scanf("%d",&n);
			die=0;
			for (i=n;i>0;i--)
			{
				die+=log10((double)i);
			}
			i=(int)die;
			if (die>=i) i++;
			printf ("%d\n",i);
			test--;
		}
	}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     
}