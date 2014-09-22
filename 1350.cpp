#include <iostream.h>
#include <string.h>
void main ()
{
	int a[1001];//定义-1开锁
	//memset(a,1,sizeof(a));//定义1为锁
	int i,test,j,n,num,t;
	cin>>num;
	for (t=0;t<num;t++)
	{
		n=0;
		for (i=0;i<1001;i++)
		{
			a[i]=-1;
		}
		cin>>test;
		for (i=2;i<test+1;i+=2)
		{
			a[i]=1;
		}
		for (i=3;i<test+1;i++)
		{
			for (j=i;j<test+1;j+=i)
			{
				a[j]*=-1;
			}
		}
		for (i=1;i<test+1;i++)
		{
			if (a[i]==-1) n++;
		}
		cout<<n<<endl;
	}
}
