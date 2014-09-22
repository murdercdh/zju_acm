#include <iostream.h>
#include <stdlib.h>
#include <string.h>
struct
{
	int x;
	int y;
}data[6000],tep;
int main ()
{
	int t,n,i,time,j,temp;
	bool flag[6000];
	while (cin>>t)
	{
		while (t)
		{
			t--;
			memset(flag,0,sizeof(flag));
			cin>>n;
			for (i=0;i<n;i++) cin>>data[i].x>>data[i].y;
			for (i=0;i<n-1;i++)
			{
				for (j=i+1;j<n;j++)
				{
					if (data[i].x>data[j].x)
					{
						tep=data[i];
						data[i]=data[j];
						data[j]=tep;
					}
					else if (data[i].x==data[j].x)
					{
						if (data[i].y>data[j].y)
						{
							tep=data[i];
							data[i]=data[j];
							data[j]=tep;
						}
					}
				}
			}
			time=0;
			for (i=0;i<n;i++)
			{
				if (flag[i]==1) continue;
				flag[i]=1;temp=data[i].y;
				for (j=i;j<n;j++)
				{
					if (temp<=data[j].y&&data[i].y<=data[j].y&&flag[j]==0)
					{
						flag[j]=1;
						temp=data[j].y;
					}
				}
				time++;
			}
			cout<<time<<endl;
		}
	}
	return 0;
}
