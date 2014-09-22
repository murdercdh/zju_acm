#include <iostream.h>
void main ()
{
	int n,i,residue,j,c,mod;
	while (cin>>n)
	{
		if (n==0) {cout<<"0 1"<<endl;continue;}
		c=0;
		for (i=1;i<10;i++)
		{
			residue=0;mod=1;
			for (j=1;j<=n;j++)
			{
				residue=(residue+i*mod)%n;
				if (residue==0) {c=1;break;}
				mod=mod*10%n;
			}
			if (c==1) break;
		}
		if (c==1) cout<<i<<" "<<j<<endl;
		else cout<<"-1"<<endl;
	}
}
