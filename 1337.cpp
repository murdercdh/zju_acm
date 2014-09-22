#include <stdio.h>
#include <math.h>
int fun (int a,int b)
{
	int temp;
	while (b>0)
	{
		temp=a%b;
		a=b;
		b=temp;
	}
	if (a==1) return 1;
	else return 0;
};
void main ()
{
	int n,data[50],i,res,count,j;
	while (scanf("%d",&n)!=EOF&&n)
	{
		res=0;count=0;
		for (i=0;i<n;i++)
		{
			scanf("%d",&data[i]);
			res+=i;
		}
		for (i=0;i<n-1;i++)
		{
			for (j=i+1;j<n;j++)
			{
				if(fun(data[i],data[j])==1) count++;
			}
		}
		if (count==0) printf ("No estimate for this data set.\n");
		else
		{
			printf ("%.6f\n",sqrt(res*6.0/count));
		}
	}
}