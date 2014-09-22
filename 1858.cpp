#include <iostream.h>
#include <string.h>
void main ()
{
	char a[21];
	int b[21],i,j;
	while(cin>>a)
	{	
		for (i=0;i<21;i++)
		{
			if (a[i]!='\0'&&a[i]>='A'&&a[i]<='Z')
			{
				if (a[i]=='B'||a[i]=='F'||a[i]=='P'||a[i]=='V') {b[i]=1;continue;}
				if (a[i]=='C'||a[i]=='G'||a[i]=='J'||a[i]=='K'||a[i]=='Q'||a[i]=='S'||a[i]=='X'||a[i]=='Z')
				{b[i]=2;continue;}
				if (a[i]=='D'||a[i]=='T') {b[i]=3;continue;}
				if (a[i]=='L') {b[i]=4;continue;}
				if (a[i]=='M'||a[i]=='N') {b[i]=5;continue;}
				if (a[i]=='R') {b[i]=6;continue;}
				if (a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'||a[i]=='H'||a[i]=='W'||a[i]=='Y')
				{b[i]=0;continue;}
			}
			else b[i]=0;
		}
		for (j=0;j<20;j++)
		{
			//cout<<b[j];
			if (b[j]!=b[j+1]&&b[j]!=0) cout<<b[j];
		}
		cout<<endl;
		for (i=0;i<21;i++)
		{b[i]=0;}
		memset(a,0,sizeof(a));
	}
}
