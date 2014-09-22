#include <iostream.h>
void main ()
{
	int a,b,c,d,e,f;
	int x,y;
	while (cin>>a>>b>>c>>d>>e>>f)
	{
		//temp1=a+c+e;
		//temp2=b+d+f;
		if (a==0&&b==0&&c==0&&d==0&&e==0&&f==0) break;
		x=(b+b+d+f-c-e)/2;
		y=a+b-x;
		cout<<"Anna's won-loss record is "<<x<<"-"<<y<<"."<<endl;
	}
}