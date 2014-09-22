#include <iostream.h>
void main ()
{
	int i,n,sum1,sum2;
	for (i=2992;i<9930;i++)
	{
		n=i;sum1=0;
		while(n)
		{
			sum1+=n%10;
			n/=10;
		}
		n=i;sum2=0;
		while(n)
		{
			sum2+=n%12;
			n/=12;
		}
		if (sum1!=sum2) continue;
		n=i;sum1=0;
		while (n)
		{
			sum1+=n%16;
			n/=16;
		}
		if (sum1==sum2) cout<<i<<endl;
	}
}
