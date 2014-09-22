#include <iostream.h>
void main ()
{
	int n,m,i,j,a[20000],sum,temp;
	while (cin>>n>>m&&n&&m)
	{
		for (i=0;i<m;i++) cin>>a[i];
		sum=0;
		for (i=1;i<=n;i++)
		{
			temp=0;
			for (j=0;j<m;j++)
			{
				if (a[j]==i) temp++;
				if (temp==2) {sum++;break;}
			}
		}
		cout<<sum<<endl;
	}
}