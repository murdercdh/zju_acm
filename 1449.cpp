#include <iostream.h>
void main ()
{
	int n,u,d,count;
	while (cin>>n>>u>>d)
	{
		if (n==0&&u==0&&d==0) break;
		count=0;
		while (n)
		{
			n-=u;count++;
			if (n<=0) break;
			n+=d;count++;
		}
		cout<<count<<endl;
	}
}
