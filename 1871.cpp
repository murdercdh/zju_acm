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
//sqrt(n)��һ��������ʱ��Ҫ 2*sqrt(n)-1 ��step
//�����ǣ� 2*sqrt(n) �� step