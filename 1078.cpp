#include <iostream.h>
#include <string.h>
void main ()
{
	int a[100],i,j=0,num,b,t;
	bool c[17];
	while(cin>>num&&num)
{
	memset(c,0,sizeof(c));
	for (i=2;i<=16;i++)
	{
		b=num;t=i;j=0;
		while(b)
		{
			a[j]=b%t;
			b/=t;j++;
		}
		for (t=0;t<=j;t++)
		{
			if (a[t]!=a[j-t-1]) break;
		}
		if (t==j) c[i]=1;
	}
	for (i=2;i<=16;i++)
	{
		if (c[i]==1) break;
	}
	if (i<=16)
	{
		cout<<"Number "<<num<<" is palindrom in basis";
		for (i=2;i<=16;i++)
		{
			if (c[i]==1) cout<<" "<<i;
		}
		cout<<endl;
	}
	else cout<<"Number "<<num<<" is not a palindrom"<<endl;
}
}
