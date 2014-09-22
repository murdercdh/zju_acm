#include <iostream>
#include <string>
using namespace std;
unsigned fun (int i)
{
	int j;
	unsigned a=2;
	if (i==1) return 2;
	else
	{
		for (j=i;j>1;j--)
		{
			a+=a;
		}
		return a;
	}
}
void main ()
{
	unsigned n;
	int l,i;
	char num[32];
	while (cin>>num)
	{
		if (num[0]=='0') break;
		l=strlen(num);n=0;
		for (i=l;i>0;i--)
		{
			n+=(fun(i)-1)*(num[l-i]-'0');
		}
		cout<<n<<endl;
	}
}