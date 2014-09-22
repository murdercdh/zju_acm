#include <iostream.h>
#include <string.h>
void main ()
{
	int n,k,c;
	int i,*a;
	bool *flag;
	int sum,sign,temp,max,t=1;
	while (cin>>n>>k>>c)
	{
		if (n==0&&k==0&&c==0) break;
		sum=0;sign=0;max=-1;
		flag= new bool [n];
		memset(flag,0,sizeof(flag));
		a= new int [n];
		for (i=0;i<n;i++) cin>>a[i];
		for (i=0;i<k;i++)
		{
			cin>>temp;
			if (sign==0)
			{
				if (flag[temp-1]==0)
				{
					sum+=a[temp-1];
					flag[temp-1]=1;
					if (sum>c) sign=1;
				}
				else
				{
					sum-=a[temp-1];
					flag[temp-1]=0;
				}
			}
			if (max<sum) max=sum;
		}
		if (sign==0)
		{
			cout<<"Sequence "<<t<<"\nFuse was not blown.\nMaximal power consumption was "<<max<<" amperes."<<endl;
		}
		else
		{
			cout<<"Sequence "<<t<<"\nFuse was blown."<<endl;
		}
		cout<<endl;
		t++;
	}
}