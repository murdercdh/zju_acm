#include <iostream>//'A'=65;'Z'=90;'V'=86;
#include <string>
using namespace std;
void main ()
{
	char a[10000][100];
	int i,l,j,t;
	while (cin>>a[0])
	{
		if (strcmp(a[0],"ENDOFINPUT")==0) break;
		if (strcmp(a[0],"START")==0)
		{
			for (i=1;;i++)
			{
				cin>>a[i];
				if (strcmp(a[i],"END")==0) break;
			}
		}
		for (j=1;j<i-1;j++)
		{
			l=strlen(a[j]);
			for (t=0;t<l;t++)
			{
				if (a[j][t]>='A'&&a[j][t]<='E') cout<<char(a[j][t]+21);
				else if (a[j][t]>='F'&&a[j][t]<='Z') cout<<char(a[j][t]-5);
				else cout<<a[j][t];
			}
			cout<<" ";
		}
		l=strlen(a[j]);
		for (t=0;t<l;t++)
		{
			if (a[j][t]>='A'&&a[j][t]<='E') cout<<char(a[j][t]+21);
			else if (a[j][t]>='F'&&a[j][t]<='Z') cout<<char(a[j][t]-5);
			else cout<<a[j][t];
		}
		cout<<"OK";
		cout<<endl;
	}
}
