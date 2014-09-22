#include <iostream.h>
#include <math.h>
void main ()
{
	int n,i,a[30],b[30],sum_a=0,sum_b=0,j=0;
	while (cin>>n&&n)
	{
		if (j==0) j++; else cout<<endl;
		sum_a=0;sum_b=0;
		for (i=0;i<n;i++) cin>>a[i];
		for (i=0;i<n;i++) cin>>b[i];
		for (i=0;i<n;i++)
		{
			if (abs(a[i]-b[i])==1)
			{
				if (a[i]==1&&b[i]==2) sum_a+=6;
				else if (a[i]==2&&b[i]==1) sum_b+=6;
				else
				{
					if (a[i]>b[i]) sum_b+=(a[i]+b[i]);
					else if (a[i]<b[i]) sum_a+=(a[i]+b[i]);
				}
			}
			else if (a[i]!=b[i])
			{
				if (a[i]>b[i]) sum_a+=a[i];
				else sum_b+=b[i];
			}
		}
		cout<<"A has "<<sum_a<<" points. B has "<<sum_b<<" points."<<endl;
	}
}
