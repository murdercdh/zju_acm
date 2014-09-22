#include <iostream.h>
#include <algorithm>
using namespace std;
void main ()
{
	int n,data[101],i;
	while (cin>>n&&n)
	{
		for (i=0;i<n;i++) cin>>data[i];
		sort(data,data+n);
		cout<<data[0];
		for (i=1;i<n;i++)
		{
			if (data[i]!=data[i-1]) cout<<" "<<data[i];
		}
		cout<<endl;
	}
}
