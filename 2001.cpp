#include <iostream.h>
void main ()
{
	int a[100],n,m,q,i,j,test,t;
	while (cin>>test)
{
	for (t=0;t<test;t++)
	{
		cin>>n>>m;
		i=0;
		while(n)
		{
			a[i]=n%10;
			i++;
			n/=10;
		}
		n=a[0];
		for (j=1;j<i;j++)
		{
			n*=10;
			n+=a[j];
		}
		i=0;
		while(m)
		{
			a[i]=m%10;
			i++;
			m/=10;
		}
		m=a[0];
		for (j=1;j<i;j++)
		{
			m*=10;
			m+=a[j];
		}
		q=m+n;
		i=0;
		while(q)
		{
			a[i]=q%10;
			i++;
			q/=10;
		}
		q=a[0];
		for (j=1;j<i;j++)
		{
			q*=10;
			q+=a[j];
		}
		cout<<q<<endl;
	}
}
}