#include <iostream.h>
void main ()
{
	int n,a[60];
	int average,i,step,time=0;
	while (cin>>n&&n)
	{
		average=0;time++;
		for (i=0;i<n;i++)
		{
			cin>>a[i];
			average+=a[i];
		}
		average/=n;
		step=0;
		for (i=0;i<n;i++)
		{
			if (a[i]>average)
			{
				step+=(a[i]-average);
			}
		}
		cout<<"Set #"<<time<<endl;
		cout<<"The minimum number of moves is "<<step<<"."<<endl<<endl;
	}
}