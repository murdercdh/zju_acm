#include <iostream.h>
void main ()
{
	int test,a[1000],i,time;
	while(cin>>test&&test)
	{
		for (i=0;i<test;i++)
		{
			cin>>a[i];
		}
		time=a[0]*6+5;
		for (i=1;i<test;i++)
		{
			if (a[i]>a[i-1])
			{
				time+=(a[i]-a[i-1])*6+5;
			}
			else
			{
				time+=(a[i-1]-a[i])*4+5;
			}
		}
		cout<<time<<endl;
	}
}