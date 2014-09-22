#include <iostream.h>
#include <string>
#include <algorithm>
using namespace std;
void main ()
{
	bool flag[1001];
	int n,m,a[50];
	int i,count,max,t=1,temp,j,now;
	while (cin>>m>>n)
	{
		if (m==0&&n==0) break;
		memset(flag,0,sizeof(flag));
		for (i=0;i<n;i++)
		{
			cin>>temp;
			flag[temp]=1;
		}
		//sort(a,a+n);
		count=n;max=m*n;j=0;now=0;
		//for (i=1;i<=max;i++) if (flag[i]==1) {now=i-1;break;}
		for (i=1;i<=max;i++)
		{
			if (flag[i]==1) {a[j]=i;j++;}
			else if (i>a[now]&&now<j) {count--;now++;}
			if (count==0) break;
		}
		cout<<"Case "<<t<<": "<<count<<endl;
		t++;
	}
}
