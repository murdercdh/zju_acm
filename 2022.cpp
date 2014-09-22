#include <iostream.h>
void main ()
{
	int t,i,num,m;
	while (cin>>t)
	{
		for (i=0;i<t;i++)
		{
			cin>>num;m=0;
			while (num)
			{
				m+=num/5;num/=5;
			}
			cout<<m<<endl;
		}
	}
}