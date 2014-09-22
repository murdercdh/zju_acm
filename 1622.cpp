#include <iostream.h>
void main ()
{
	int light[10001];
	int i,n,count1,count2;
	while (cin>>n)
	{
		count1=0;count2=0;
		for (i=0;i<n;i++) 
		{
			cin>>light[i];
			if (light[i]==1)
			{
				if(i%2!=0) count1++;
				else count2++;
			}
			else
			{
				if (i%2!=0) count2++;
				else count1++;
			}
		}
		if (count1<count2) cout<<count1<<endl;
		else cout<<count2<<endl;
	}
}