#include <iostream.h>
void main ()
{
	bool a[150],flag;
	int n;
	int i,m,j,step,num;
	while (cin>>n&&n)
	{
		for (step=2;;step++)
		{
			for (i=0;i<n;i++) a[i]=0;
			m=step;num=0;j=0;
			a[0]=1;
			while(num!=n-1)
			{
				m=step;
				while (m)
				{
					if (a[j]==0) {m--;if (m==0) break;}
					j++;
					if (j==n) j=0;
				}
				a[j]=1;num++;
				if (num!=n-1&&a[1]==1) {flag=0;break;}
				else if (num==n-1&&a[1]==1) {flag=1;goto end;}
			}
		}
end:cout<<step<<endl;
	}
}
