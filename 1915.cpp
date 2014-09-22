#include <iostream.h>
#include <stdio.h>
void main ()
{
	int test,num,a[100],i,j,tol,poeple;
	float average;
	while(cin>>test)
	{
	for (i=0;i<test;i++)
	{
		cin>>num;
		tol=0;
		for (j=0;j<num;j++)
		{
			cin>>a[j];
			tol+=a[j];
		}
		average=float(tol)/num;
		poeple=0;
		for (j=0;j<num;j++)
		{
			if (average<(float)a[j]) poeple++;
		}
		printf("%.3f%%\n",float(poeple*100)/num);
	}
	}
}
