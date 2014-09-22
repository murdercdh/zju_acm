#include <iostream.h>
#include <string.h>
bool prime[]={0,0,1,1,0,1,0,1,0,0,0,1, 
                  0,1,0,0,0,1,0,1,0,0, 
                  0,1,0,0,0,0,0,1,0,1,0, 
                  0,0,0,0,1,0,0}; 
bool flag[21];
int n,a[20];
void check(int t)
{
	int j;
	if (t==n&&prime[a[n-1]+a[0]]==1)
	{
		for (j=0;j<n-1;j++) cout<<a[j]<<" ";
		cout<<a[j]<<endl;
		return ;
	}
	else
	{
		for (j=1;j<=n;j++)
		{
			if (flag[j]==0&&prime[j+a[t-1]]==1) 
			{
				a[t]=j;flag[j]=1;
				check(t+1);
				flag[j]=0;
			}
		}
	}
}
void main ()
{
	int t=1;
	while (cin>>n)
	{
		cout<<"Case "<<t<<":"<<endl;
		if (n%2==0)
		{
			a[0]=1;
			//memset(flag,0,sizeof(flag));
			flag[1]=1;
			check(1);
		}
		t++;
		cout<<endl;
	}
}