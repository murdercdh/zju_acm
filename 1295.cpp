#include <stdio.h>
#include <string.h>
void main ()
{
	int test,i,leg,j;
	char c[70];
	while (scanf("%d",&test)!=EOF)
	{
		gets(c);
		for (i=0;i<test;i++)
		{
			gets(c);
			leg=strlen(c);
			for (j=leg-1;j>=0;j--)
			{
				printf("%c",c[j]);
			}
			printf ("\n");
		}
	}
}