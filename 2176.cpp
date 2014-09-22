#include <iostream.h>
void main ()
{
	int n,mile,s,t,temp;
	while (cin>>n)
	{
		if (n==-1) break;
		temp=mile=0;
		while (n)
		{
			n--;
			cin>>s>>t;
			mile+=s*(t-temp);
			temp=t;
		}
		cout<<mile<<" miles"<<endl;
	}
}