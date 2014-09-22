#include <iostream.h>
#include <string.h>
void main ()
{
	bool priem[1500];
	memset(priem,0,sizeof(priem));
	int i,j,max,c,num,a[300],b;
	for (i=2;i<1001;i++)
	{
		for (j=i+i;j<1001;j+=i)
		{
			priem[j]=1;
		}
	}
	while(cin>>max>>c)
	{
		num=0;
		for (i=1;i<=max;i++)
		{
			if (priem[i]==0) {//cout<<i<<" ";
			a[num]=i;num++;}
		}
		if (num%2) b=c+c-1;
		else b=c+c;
		//cout<<endl<<"b="<<b<<endl;
		if (b<num)
		{
			cout<<max<<" "<<c<<":";
			for (i=(num-b)/2;i<(num+b)/2;i++)
			{
				cout<<" "<<a[i];
			}
			cout<<endl<<endl;
		}
		else
		{
			cout<<max<<" "<<c<<":";
			for (i=0;i<num;i++)
			{
				cout<<" "<<a[i];
			}
			cout<<endl<<endl;
		}
	}
}