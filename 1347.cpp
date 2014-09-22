/*
#include <stdio.h>
void main ()
{
	int n,m,test,num_human,i;
	double p,R,S,x,totle,temp,temp1;
	scanf("%d",&test);
	while (test)
	{
		test--;
		scanf("%d%lf%d%lf%lf",&n,&p,&m,&R,&S);
		x=(S*m+n*p)/(2.0*m);
		x-=(3*p);
		x=((int)(x/p))*p+p-0.01;
		if (x<0) x=p-0.01;
		temp1=-1000000000;
		for (i=0;i<100;i++)
		{
			temp=(x-S)*(n-int(x/p)*m);
			if (temp>=temp1) {temp1=temp;}
			else break;
			x+=p;
		}
		x-=p;
		num_human=n-int(x/p)*m;
		totle=x*num_human-R-S*num_human;
		printf ("price = %.2f\naudiences = %d\nrevenue = %.2f\n",x,num_human,totle);
		if (test) printf ("\n");
	}
}
*/
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int N,n,m,i,con=0,num;
	double p,r,s,price,revenue,a,b;
	cin>>N;
	for(i=0;i<N;i++)
	{
		cin>>n>>p>>m>>r>>s;
	   b=p*n/(2*m)+s/2-3*p;
	   if(b>0)
	   {
		   price=(int)(b/p)*p+p-0.01;		   
		   num=n-((int)(price/p))*m;
		   revenue=num*(price-s);
	   }
	   else
	   {
		   price=p-0.01;
	       revenue=n*(price-s);
	       num=n;
	   }
	   while(1)
	   {
        a=(num-m)*(price+p-s);
        if(a<=revenue) break;
		else
		{
			price+=p;
			num-=m;
			revenue=a;
		}
	   }
	   cout<<"price = "<<setiosflags(ios::fixed)<<setprecision(2)<<price<<endl;
       cout<<"audiences = "<<num<<endl;
	   cout<<"revenue = "<<setiosflags(ios::fixed)<<setprecision(2)<<revenue-r<<endl;
	   con++;
	   if (con!=N) cout<<endl;
	}
	return 1;
}
