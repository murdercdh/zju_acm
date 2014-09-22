#include <iostream.h>
void main ()
{
	int d,n,i,j;
	while (cin>>d)
	{
		for (i=0;i<d;i++)
		{
			cin>>n;j=0;
			while (n)
			{
				if (n%2==1) {cout<<j;n/=2;j++;break;}
				n/=2;j++;
			}
			while (n)
			{
				if (n%2==1) cout<<" "<<j;
				n/=2;j++;
			}
			cout<<endl;
		}
	}
}