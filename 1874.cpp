#include <iostream.h>
void main ()
{
	int c,a,b,count;
	while (cin>>a>>b)
	{
		if (a==0&&b==0) break;
		count=0;c=0;
		while (a||b)
		{
			if (a%10+b%10+c>=10) {c=1;count++;}
			else c=0;
			a/=10;b/=10;
		}
		if (count==1) cout<<"1 carry operation."<<endl;
		else if (count>1) cout<<count<<" carry operations."<<endl;
		else cout<<"No carry operation."<<endl;
	}
}