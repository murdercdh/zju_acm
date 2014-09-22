#include <iostream.h>
#include <string.h>
void main ()
{
	char s[71];
	int k,n,num[71],len,i,ciphercode[71];
	while (cin>>k&&k)
	{
		cin>>s;
		len=strlen(s);
		for (i=0;i<len;i++)
		{
			if (s[i]<='z'&&s[i]>='a') num[i]=s[i]-96;
			else if (s[i]=='.') num[i]=27;
			else if (s[i]=='_') num[i]=0;
		}/*
		for (i=0;i<len;i++)
		{
			cout<<num[i]<<"  ";
		}*/
		for (i=0;i<len;i++)
		{
			//cout<<k*i%len<<endl;
			ciphercode[k*i%len]=num[i]+i;
		}
		for (i=0;i<len;i++)
		{
			if (ciphercode[i]>=28) ciphercode[i]%=28;
			if (ciphercode[i]==0) cout<<"_";
			else if (ciphercode[i]==27) cout<<".";
			else {cout<<char(ciphercode[i]+96);}
		}
		cout<<endl;
	}
}
