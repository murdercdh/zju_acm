#include <iostream.h>
#include <string.h>
void main ()
{
	int a[10001],m,n,i,temp,b,sumT;
	while(cin>>n>>m)
	{
		b=0;sumT=0;
		memset(a,0,sizeof(a));
		a[0]=1;
		for (i=0;i<n;i++)
		{
			cin>>temp;
			b=(b+temp%m)%m;//cout<<i<<"   "<<temp<<"   "<<b<<endl;
			sumT+=(a[b]++);
		}
		//for (i=0;i<m;i++) cout<<a[i]<<endl;
		//cout<<"******"<<endl<<sumT<<endl;
		cout<<sumT<<endl;
	}
}