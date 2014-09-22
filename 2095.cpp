#include <stdio.h>
#include <string.h>
#include <math.h>
/*
void main ()
{
	int test,n,sum,i,t;
	bool prime[500000];
	memset(prime,0,sizeof(prime));
	for (i=2;i<500000;i++)
	{
		for (t=i+i;t<500000;t+=i)
		{
			prime[t]=1;
		}
	}
	for (i=2;i<500000;i++)
	{
		if (prime[i]==0) cout<<i<<endl;
	}
	while (scanf("%d",&test)!=EOF)
	{
		while (test)
		{
			test--;
			scanf("%d",&n);
			if (prime[n]==0) printf ("1\n");
			else
			{
				if (n==4) {printf ("3\n");continue;}
				t=(int)sqrt(n);sum=1;
				for (i=2;i<=t;i++)
				{
					if (n%i==0) {sum+=(i+n/i);}
				}
				printf ("%d\n",sum);
			}
		}
	}
}
*/
void main ()
{
	int data[500001],i,j,test,n;
	memset(data,0,sizeof(data));
	for (i=1;i<500001;i++)
	{
		for (j=i+i;j<500001;j+=i)
		{
			data[j]+=i;
		}
	}
	while (scanf("%d",&test)!=EOF)
	{
		while (test)
		{
			test--;
			scanf("%d",&n);
			printf ("%d\n",data[n]);
		}
	}
}