#include <iostream>
#include <string>
using namespace std;
int digit(int n)
{
	int dig=0;
	while(n)
	{
	 		dig+=n%10;
			n/=10;
	}
	return dig;
}
int main ()
{
	bool prime_temp[10001];
	memset(prime_temp,0,sizeof(prime_temp));
	int i,j,n,sum1,sum2,temp;
	int prime[1250],t=0;
	for (i=2;i<10001;i++)
	{
		for (j=i+i;j<10001;j+=i)
		{
			prime_temp[j]=1;
		}
	}
	for (i=2;i<10001;i++) if (prime_temp[i]==0) prime[t++]=i;
	while(cin>>n&&n)
	{
         temp=n;
         while(1)
         {
				 n++;
				 temp=n;
				 sum1=digit(temp);
				 sum2=0;
				 for (i=0;i<t;i++)
				 {
					 if (prime[i]*prime[i]>n) break;
					 while(temp%prime[i]==0)
					 {
						sum2+=digit(prime[i]);
						temp/=prime[i];
					 }
				 }
				 if (n==temp) continue;
				 if (temp>1) sum2+=digit(temp);
				 if (sum1==sum2) {cout<<n<<endl;break;}
         }
    }
    return 0;
}
