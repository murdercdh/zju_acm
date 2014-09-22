#include <stdio.h>
int a[60001];
void main ()
{
	int i,j,num[100];
	for (i=1;i<=60000;i++)
	{
		for (j=i;j<=60000;j+=i)
		{
			a[j]+=i;
		}
	}
	i=0;
	while (1)
	{
		scanf("%d",&num[i]);
		if (num[i]==0) break;
		i++;
	}
	printf ("PERFECTION OUTPUT\n");
	for (j=0;j<i;j++)
	{
		if(a[num[j]]-num[j]==num[j]) printf ("%5d  PERFECT\n",num[j]);
		else if (a[num[j]]-num[j]>num[j]) printf ("%5d  ABUNDANT\n",num[j]);
		else if (a[num[j]]-num[j]<num[j]) printf ("%5d  DEFICIENT\n",num[j]);
	}
	printf ("END OF OUTPUT\n");
}