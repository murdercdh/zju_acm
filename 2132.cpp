#include <stdio.h>
void main ()
{
	int data,count,L,i,res;
	while (scanf("%d",&L)!=EOF)
	{
		count=0;
		for (i=0;i<L;i++)
		{
			scanf("%d",&data);
			if (count==0) {res=data;count=1;}
			else if (res==data) {count++;}
			else count--;
		}
		printf ("%d\n",res);
	}
}
