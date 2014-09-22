#include <iostream.h>
void main ()
{
	int num,a[7],i,j,c=1,tem;
start:cin>>num;
	if (num==0) goto end;
	tem=num;
	for (i=0;i<7;i++)
	{
		a[i]=tem%2;
		tem/=2;
	}
	for (i=0;i<7;i++)
	{
		if (a[i]==1) break;
	}
	c=1;
	for (j=0;j<i;j++)
	{
		c*=2;
	}
	cout<<c<<endl;
	end:if (num) goto start;
}
