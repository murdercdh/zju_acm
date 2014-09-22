#include <iostream.h>
void main ()
{
	int n,a[35],average,i,step;
	while (cin>>n&&n)
	{
		average=0;
		for (i=0;i<n;i++) {cin>>a[i];average+=a[i];}
		if (average%2) {cout<<"No equal partitioning."<<endl;continue;}
		average/=2;
		for (i=0;i<n;i++)
		{
			average-=a[i];
			if (average<=0) {step=i;break;}
		}
		if (average==0) cout<<"Sam stops at position "<<step+1<<" and Ella stops at position "<<step+2<<"."<<endl;
		else cout<<"No equal partitioning."<<endl;
	}
}