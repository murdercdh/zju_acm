#include <iostream.h>
void main ()
{
	int n,t,i,num;
	while (cin>>n)
	{
		while (n)
		{
			n--;
			cin>>num;t=0;
			if (num%2)
			{
				for (i=num/2-1;i>=1;i--) t+=i;
				t*=2;
				t+=num/2;
			}
			else
			{
				for (i=num/2-1;i>=1;i--) t+=i;
				t*=2;
			}
			cout<<t<<endl;
		}
	}
}
