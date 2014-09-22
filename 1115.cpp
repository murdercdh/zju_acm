#include <iostream.h>
int fun (int a)
{
	int b=0,i;
loop:b=0;
	for (i=0;;i++)
	{
		b+=a%10;
		a/=10;
		if (a==0) break;
	}
	if (b>=10) {a=b;goto loop;}
	else return b;
};
void main ()
{
	int i,n=0;	
	char a[1000];
start:cin>>a;
	if (a[0]=='0') goto end;
	n=0;
	for (i=0;i<1000;i++)
	{
		if (a[i]=='\0') break;
		n+=a[i]-'0';
	}
	cout<<fun (n)<<endl;
end:if (a[0]!='0') goto start;
}