#include <iostream.h>
#include <string.h>
void main ()
{
	int n,a[60],b[60];
	char flag;
	int i,j,temp;
	while (cin>>n&&n)
	{
		cin>>flag;
		for (i=0;i<n;i++) cin>>a[i];
		if (flag=='P')
		{
			for (i=1;i<=n;i++)
			{
				temp=0;
				for (j=0;j<n;j++)
				{
					if (a[j]==i) break;
					else if (a[j]>i) temp++;
				}
				if (i!=n) cout<<temp<<" ";
				else cout<<temp<<endl;
			}
		}
		else
		{
			memset(b,0,sizeof(b));
			b[a[0]]=1;
			for (i=1;i<n;i++)
			{
				temp=a[i];j=0;
				while (temp)
				{
					if (b[j]==0) {temp--;}
					j++;
				}
				while (b[j]) {j++;}
				b[j]=i+1;
			}
			for (int k=0;k<n;k++)
			{
				if (k!=n-1)cout<<b[k]<<" ";
				else cout<<b[k]<<endl;
			}
		}
	}
}
