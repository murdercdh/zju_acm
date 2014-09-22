#include <iostream.h>
void main ()
{
	int a,b,c,d,sum;
	while (cin>>a>>b>>c>>d)
	{
		if (a==0&&b==0&&c==0&&d==0) break;
		sum=1080;
		if (a-b<0)	sum+=(40-b+a)*9;
		else sum+=(a-b)*9;
		if (c-b>=0) sum+=(c-b)*9;
		else sum+=(c-b+40)*9;
		if (c-d<0) sum+=(40-d+c)*9;
		else sum+=(c-d)*9;
		cout<<sum<<endl;
	}
}