#include <stdio.h>
void main ()
{
	int x,y,n,i,sum;
	while (scanf("%d",&n)!=EOF)
	{
		x=1;y=1;sum=0;
		for (i=1;;i++)
		{
			sum+=i;
			if (sum<n&&n<(sum+i+1)) {i++;break;}
			else if (sum==n) break;
		}
		if (i%2==0)
		{
			if (n==sum) {y=i;x=1;}
			else {y=n-sum;x=sum+i-n+1;}
		}
		else
		{
			if (n==sum) {y=1;x=i;}
			else {y=sum+i-n+1;x=n-sum;}
		}
		printf ("TERM %d IS %d/%d\n",n,y,x);
		//cout<<"TERM "<<n<<" IS "<<y<<"/"<<x<<endl;
	}
}