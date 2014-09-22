#include <iostream>
using namespace std;
void main ()
{
	int x,y,n,i;
	while (cin>>n)
	{
		for (i=0;i<n;i++)
		{
			cin>>x>>y;
			if (x==y||x-y==2)
			{
				if (x%2) {cout<<x+y-1<<endl;continue;}
				else {cout<<x+y<<endl;continue;}
			}
			else
			{
				cout<<"No Number"<<endl;
				continue;
			}
		}
	}
}