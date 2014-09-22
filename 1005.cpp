#include <iostream.h>
void main ()
{
	int Ca,Cb,n;
	int a,b,step1,step2;
	while (cin>>Ca>>Cb>>n)
	{
		a=0;b=0;step1=0;step2=0;
		while (1)
		{
			if (a==0)
			{
				a=Ca;step1++;
			}
			if (b==n) break;
			if (Cb-b>a) {b+=a;a=0;}
			else {a-=(Cb-b);b=Cb;}
			step1++;
			if (b==n) break;
			if (b==Cb)
			{
				b=0;step1++;
			}
			if (b==n) break;
		}
		a=0;b=0;
		while (1)
		{
			if (b==0)
			{
				b=Cb;step2++;
			}
			if (b==n) break;
			if (Ca-a>b) {a+=b;b=0;}
			else {b-=(Ca-a);a=Ca;}
			step2++;
			if (b==n) break;
			if (a==Ca)
			{
				a=0;step2++;
			}
			if (b==n) break;
		}
		a=0;b=0;
		if (step1<step2)
		{
			while (1)
			{
				if (a==0)
				{
					a=Ca;step1++;
					cout<<"fill A"<<endl;
				}
				if (b==n) break;
				if (Cb-b>a) {b+=a;a=0;}
				else {a-=(Cb-b);b=Cb;}
				cout<<"pour A B"<<endl;step1++;
				if (b==n) break;
				if (b==Cb)
				{
					b=0;step1++;
					cout<<"empty B"<<endl;
				}
				if (b==n) break;
			}
			cout<<"success"<<endl;
		}
		else
		{
			while (1)
			{
				if (b==0)
				{
					b=Cb;step2++;
					cout<<"fill B"<<endl;
				}
				if (b==n) break;
				if (Ca-a>b) {a+=b;b=0;}
				else {b-=(Ca-a);a=Ca;}
				cout<<"pour B A"<<endl;step2++;
				if (b==n) break;
				if (a==Ca)
				{
					a=0;step2++;
					cout<<"empty A"<<endl;
				}
				if (b==n) break;
			}
			cout<<"success"<<endl;
		}
	}
	
}