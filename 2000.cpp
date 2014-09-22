#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	int data[30],i,n,t,m,a;
	for (i=1;i<19;i++)
	{
		data[i]=1;
		if ((float)i/2>i/2) t=i/2+1;
		else t=i/2;
		while (t)
		{
			if (t==1) data[i]*=9;
			else data[i]*=10;
			t--;
		}
		if (i!=1) data[i]+=data[i-1];
		//cout<<i<<"   "<<data[i]<<endl;
	}
	while (cin>>n&&n)
	{
		if (n<10) {cout<<n<<endl;continue;}
		for (i=1;i<19;i++)
		{
			if (n>data[i]&&data[i+1]>=n) {i++;break;}
		}
		t=n-data[i-1];
		if (n<19) {cout<<t<<t<<endl;continue;}
		//cout<<i<<"   "<<t<<endl;
		a=0;
		if (i%2)
		{
			m=(int)pow(10,i/2);
			m+=(t-1);
			cout<<m;
			while (m)
			{
				if (m==1) break;
				m/=10;
				cout<<m%10;
				a++;
				if (a==i/2) break;
			}
			cout<<endl;
		}
		else
		{
			m=(int)pow(10,i/2-1);
			m+=(t-1);
			cout<<m;
			while (m)
			{
				cout<<m%10;
				m/=10;
			}
			cout<<endl;
		}
	}
}
