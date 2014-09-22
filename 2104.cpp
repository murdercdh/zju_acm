#include <iostream>
#include <string>
using namespace std;
void main ()
{
	int test,i,a[1000],n,sum,j,c,d;
	char colour[1000][16];
	while (cin>>test)
	{
		if (test==0) break;
		else
		{
			i=test;
			while(i)
			{
				cin>>colour[i-1];
				i--;
			}
			sum=0;
			for (i=0;i<test;i++)
			{
				n=0;
				for (j=i+1;j<test;j++)
				{
					if (strcmp(colour[i],colour[j])==0) {n++;c=i;}
				}
				if (n>sum) {sum=n;d=i;}
			}
			cout<<colour[d]<<endl;
		}
	}
}