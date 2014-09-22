#include <iostream.h>
void main ()
{
	int num,a[100],i,j,tem,t;
	while (cin>>num)
	{
		if (num==0) break;
		j=0;
		for (i=0;i<num;i++)
		{
			cin>>a[i];
		}
again:tem=a[0];j++;
		a[0]=(a[num-1]+a[0])/2;t=a[0];
		a[0]=tem;
		for (i=num-1;i>0;i--)
		{
			a[i]=(a[i]+a[i-1])/2;
		}
		a[0]=t;
		for (i=0;i<num;i++)
		{
			if (a[i]%2) a[i]++;
		}
		for (i=0;i<num-1;i++)
		{
			if (a[i]!=a[i+1]) goto again;
		}
		cout<<j<<" "<<a[0]<<endl;
	}
}