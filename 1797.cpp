#include <iostream>
#include <algorithm>
using namespace std;
unsigned fun(unsigned a, unsigned b) 
{ 
	unsigned temp;
	while (a)
	{
	   temp=a;
	   a=b%a;
	   b=temp;
	}
	return b;
	/*
	if(a == 0) return b; 
	else return fun(b%a,a); 
	*/
};
void main ()
{
	unsigned test,n,i,j,b;
	double lcm;
	cin>>test;
	for (j=0;j<test;j++)
	{
		cin>>n;cin>>lcm;
		for (i=1;i<n;i++)
		{
			cin>>b;
			lcm=lcm/fun(lcm,b)*b;
		}
		cout<<(unsigned)lcm<<endl;
	}
} 
/*int test,num,a[1000],i,j;
	cin>>test;
	for (i=0;i<test;i++)
	{
		cin>>num;
		for (j=0;j<num;j++)
		{
			cin>>a[j];
		}
	}
	sort (a,a+num);//从小到大
*/