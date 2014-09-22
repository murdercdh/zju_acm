#include <iostream.h>
#include <stdio.h>
void main ()
{
	int i,j,a[10],test;
	double num=0;
	double b[10];
	a[0]=1;
	cout<<"n e"<<endl;
	cout<<"- -----------"<<endl;
	for (test=0;test<=9;test++)
	{
	for (i=1;i<10;i++)
	{
		a[i]=a[i-1]*i;
	}
	for (i=0;i<10;i++)
	{
		b[i]=(double)1/a[i];
	}
	num=0;
	for (i=0;i<=test;i++)
	{
		num+=b[i];
	}
	//for (i=0;i<10;i++)
	//{
		//cout<<b[i]<<endl;
	//}
	if (test>2) printf ("%d %.9f%\n",test,num);
	if(test==2) printf ("%d %.1f\n",test,num);
	if (test<2) printf ("%d %d\n",test,test+1);
	//cout<<test<<" "<<num<<endl;
	}
}
