#include <iostream.h>
void main ()
{
int n,i,a;
while (cin>>n)
{
	if (n%2==0||n==1) cout<<"2^? mod "<<n<<" = 1"<<endl;
	else
	{
		a=1;
		for (i=1;;i++)
		{
			a=(a+a)%n;
			if (a==1) break;
		}
		cout<<"2^"<<i<<" mod "<<n<<" = 1"<<endl;
	}
}
}
//2^x mod n = ( ( 2^(x-1) mod n ) * 2 ) mod n 

