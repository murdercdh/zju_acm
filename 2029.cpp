#include <stdio.h>
#include <iostream.h>
#include <algorithm>
using namespace std;
void main ()
{
	int n,m,a[1000],temp,i,j;
	while (cin>>n>>m)
	{
		for (i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		for (i=0;i<m;i++) 
		{
			cin>>temp;
			if (temp<a[0]||temp>=a[n-1]) cout<<"no such interval"<<endl;
			else
			for (j=0;j<n-1;j++)
			{
				if (temp<a[j+1]&&temp>=a[j]) {cout<<"["<<a[j]<<","<<a[j+1]<<")"<<endl;break;}
				//else if (temp<=a[j+1]&&temp>a[i]) {cout<<"("<<a[j]<<","<<a[j+1]<<"]"<<endl;break;}
				//else if (temp<a[j+1]&&temp>=a[i]) {cout<<"["<<a[j]<<","<<a[j+1]<<")"<<endl;break;}
			}
		}
		cout<<endl;
	}
}
