#include <iostream.h>
#include <string.h>
void main ()
{
	char c[55];
	int i,test,j,l;
	while (cin>>test)
	{
		for (i=1;i<=test;i++)
		{
			cin>>c;
			l=strlen(c);
			cout<<"String #"<<i<<endl;
			for (j=0;j<l;j++)
			{
				if (c[j]=='Z') cout<<"A";
				else cout<<char(c[j]+1);
			}
			cout<<endl<<endl;
		}
	}
}
