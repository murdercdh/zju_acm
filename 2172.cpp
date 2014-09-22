#include <iostream.h>
#include <string.h>
void main ()
{
	char data[15][30];
	int n,i,t=0;
	bool flag[15];
	while (cin>>n&&n)
	{
		t++;
		for (i=0;i<n;i++) cin>>data[i];
		cout<<"SET "<<t<<endl;
		memset(flag,0,sizeof(flag));
		for (i=0;i<n;i+=2)
		{
			cout<<data[i]<<endl;
			flag[i]=1;
		}
		for (i=n-1;i>=0;i--)
		{
			if (flag[i]==0) cout<<data[i]<<endl;
		}
	}
}