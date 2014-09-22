#include <iostream.h>
#include <string.h>
void main ()
{
	int a[4][1000],i,j,num,c;
	memset (a,1,sizeof(a));
	while (cin>>num)
	{
		a[1][0]=1;a[2][0]=1;
		while (num&&num>=3)
		{
			c=0;
			for (j=0;j<1000;j++)
			{
				if (a[2][j]==16843009&&a[1][j]==16843009&&c==0) break;
				if (a[2][j]==16843009&&a[1][j]==16843009&&c) {a[3][j]=c;c=0;break;}
				if (a[2][j]!=16843009&&a[1][j]!=16843009) {a[3][j]=a[2][j]+a[1][j]+c;c=0;}
				if (a[2][j]!=16843009&&a[1][j]==16843009) {a[3][j]=a[2][j]+c;c=0;}
				if (a[3][j]>=10) {c=1;a[3][j]-=10;}
			}
			for (j=0;j<1000;j++)
			{
				a[1][j]=a[2][j];
				a[2][j]=a[3][j];
			}
			num--;
		}
		for (i=999;i>=0;i--)
		{
			if (a[2][i]!=16843009) cout<<a[2][i];
		}
		cout<<endl;
		memset (a,1,sizeof(a));
	}
}