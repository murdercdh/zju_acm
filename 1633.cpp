#include <iostream.h>
void main ()
{
	char data[8]="T.T^__^";
	long n,a,b,c;//submitҪ��Ϊlong long (64 bit)��
	while (cin>>n)
	{
		while (n>7)
		{
			a=4;b=3;c=7;
			while (n>c)
			{
				a=b;b=c;
				c=a+b;
			}
			n-=(c-a);
		}
		cout<<data[n-1]<<endl;
	}
}