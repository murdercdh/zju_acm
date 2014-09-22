#include <iostream.h>
#include <math.h>
void main ()
{
	int x,y,t;
	double res;
	while (cin>>x>>y)
	{
		t=y-x;
		if (t<=3) {cout<<t<<endl;continue;}
		res=sqrt(t);
		t=(int)res;
		if (t<res) {t=(int)(res*2);cout<<t<<endl;}
		else cout<<2*t-1<<endl;
	}
}
//sqrt(n)是一个整数的时候要 2*sqrt(n)-1 个step
//否则是： 2*sqrt(n) 个 step