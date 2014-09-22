#include <iostream.h>
#include <string.h>
void main ()
{
	int a[1000],station[1000],now;
	int n,i,j;
	bool flag[1000];
	while (1)
	{
		cin>>n;
		if (n==0) break;
again:cin>>a[0];
		if (a[0])
		{
			flag[a[0]]=0;
			for (i=1;i<n;i++) {cin>>a[i];flag[a[i]]=0;}
			now=0;
			for (i=0;i<n;i++)
			{
				for (j=1;j<=a[i];j++)
				{
					if (flag[j]==0)
					{
						station[now]=j;now++;
						flag[j]=1;
					}
				}
				if (now>=1&&station[now-1]==a[i]) {flag[a[i]]=1;now--;}
				//cout<<now<<endl;
			}
			//cout<<now<<"------------------"<<endl;
			if (now==0) cout<<"Yes"<<endl;
			else cout<<"No"<<endl;
			goto again;
		}
		cout<<endl;
	}
}
