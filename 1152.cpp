#include <iostream.h>
void main ()
{
	int m,n,i,count,block,j,test,t;
	cin>>block;
	for (t=0;t<block;t++)
	{
		if (t) cout<<endl;
		test=0;
		while (cin>>n>>m)
		{
			if (m==0&&n==0) break;
			test++;
			count=0;
			for (i=1;i<n;i++)
			{
				for (j=i+1;j<=n;j++)
				{
					if ((i*i+j*j+m)%(i*j)==0) count++;
				}
			}
			cout<<"Case "<<test<<": "<<count<<endl;
		}
	}
}
