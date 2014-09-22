#include <iostream.h>
#include <string.h>
void main ()
{
	int num,i,j,m;
	bool prime[1000000];
	memset (prime,0,sizeof(prime));
	for (i=2;i<1000000;i++)
	{
		for (j=i+i;j<1000000;j+=i)
		{
			prime[j]=1;
		}
	}
	while(cin>>num)
	{
		if (num==0) break;
		m=0;
		for (i=2;i<=num/2;i++)
		{
			if (prime[i]==0&&prime[num-i]==0) m++;
		}
		cout<<m<<endl;
	}
}