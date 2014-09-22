#include <stdio.h>
void main ()

{
	int a[15],b[15],i,j,t,count;
	while (1)
	{
		for (i=0;;i++)
		{
			scanf("%d",&a[i]);
			b[i]=2*a[i];
			if (a[i]==0) break;
			if (a[i]==-1) goto end;
		}
		count=0;
		for (t=0;t<i;t++)
		{
			for (j=0;j<i;j++)
			{
				if (a[t]==b[j]) count++;
			}
		}
		printf ("%d\n",count);
	}
end:;
}