#include <iostream.h>
#include <stdio.h>
/*
void main ()
{
	double res,x=0,temp;
	int k;
	for (x=0;x<=0.01;x+=0.001)
	{
		res=0;
		for (k=1;k<90000;k++)
		{
			temp=1/(k*(k+x));
			//if (temp<1e-12) break;
			res+=temp;
		}
		printf ("%5.3f %16.12f\n",x,res);
	}
}
*/ 
int  main() 
{ 
   // freopen("1007.out", "w", stdout); 
    double delta, x; 
    int k; 
    for (x=0;x<=1.01;x+=0.001) 
    { 
        delta=0.0; 
        for (k=1;k<=11000;k++) delta+=1.0/(k*(k+1.0)*(k+2.0)*(k+x)); 
        double result=(x-1)*0.75+(2-x)*1.0+(x-1)*(x-2)*delta; 
        printf("%5.3f %16.12f\n",x,result); 
    } 
    return 0; 
}