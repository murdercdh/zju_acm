#include <iostream.h>
#include <string.h>
void main ()
{
	char a[101],b[101];
	int i,n,num1[101],num2[101],l1,l2;
	while (cin>>a>>b)
	{
		for (i=0;i<101;i++)
		{ num1[i]=-1;num2[i]=-1;}
		l1=strlen(a);
		for (i=l1-1;i>=0;i--)
		{
			if (a[i]>='a'&&a[i]<='j') num1[l1-i-1]=a[i]-'W';
			else num1[l1-i-1]=a[i]-'0';
		}
		l2=strlen(b);
		for (i=l2-1;i>=0;i--)
		{
			if (b[i]>='a'&&b[i]<='j') num2[l2-i-1]=(int)b[i]-87;
			else num2[l2-i-1]=b[i]-'0';
		}
		n=0;
		for (i=0;i<100;i++)
		{
			if (num1[i]<0&&num2[i]<0&&n==0) {i--;break;}
			else if (num1[i]<0&&num2[i]<0&&n==1) {num1[i]=1;break;}
			if (num1[i]<0) {num1[i]=num2[i]+n;n=0;goto again;}
			if (num2[i]<0) {num1[i]+=n;n=0;goto again;}
			if (num1[i]>=0&&num2[i]>=0) {num1[i]=num1[i]+num2[i]+n;n=0;}
again:		if (num1[i]>=20) {num1[i]-=20;n=1;}
		}
		for (n=i;n>=0;n--)
		{
			if (num1[n]>=10&&num1[n]<=19) cout<<(char)(num1[n]+87);
			else cout<<num1[n];
		}
		cout<<endl;
	}
}