#include <iostream.h>
#include <algorithm>
using namespace std;
void main ()
{
	int test,n;
	int a[1000];
	cin>>test;
	int i,max,num_equal,temp;
	while (test)
	{
		test--;
		cin>>n;
		for (i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		max=0;num_equal=0;
		for (i=0;i<n;i++)
		{
			temp=0;
			if ((i+1<n)&&a[i]==a[i+1]) {num_equal++;}
			else
			{
				temp+=num_equal*a[i]+(n-i)*a[i];
				num_equal=0;
			}
			if (max<temp) max=temp;
		}
		cout<<max<<endl;
	}
}