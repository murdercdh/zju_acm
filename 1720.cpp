#include <iostream.h>
void main ()
{
	int a[9],i,num;
	while (cin>>a[0])
	{for (i=1;i<9;i++)
	{
		cin>>a[i];
	}
	for (i=0;i<9;i++)
	{
		if (a[i]!=0) break;
	}
	if (i==9) num=i-1;
	else num=i;
	if (a[num]==1&&num!=8) {if (num==7)cout<<"x";else cout<<"x^"<<8-num;}
	else if (a[num]==-1&&num!=8) {if (num==7)cout<<"-x";else cout<<"-x^"<<8-num;}
	else if (a[num]<-1||a[num]>1) cout<<a[num]<<"x^"<<8-num;
	if (num==8) {cout<<a[num];goto loop;}
	for (i=num+1;i<8;i++)
	{
		if (i==7) 
		{
			if (a[i]!=0) 
			{
				if (a[i]>1) {cout<<" + "<<a[i]<<"x";continue;}
				if (a[i]<-1) {cout<<" - "<<-a[i]<<"x";continue;}
				if (a[i]==1) {cout<<" + x";continue;}
				if (a[i]==-1) {cout<<" - x";continue;}
			}
		}
		if (a[i]==0) continue;
		else if(i!=7)
		{
			if (a[i]>1) {cout<<" + "<<a[i]<<"x^"<<8-i;continue;}
			if (a[i]<-1) {cout<<" - "<<-a[i]<<"x^"<<8-i;continue;}
			if (a[i]==1) {cout<<" + x^"<<8-i;continue;}
			if (a[i]==-1) {cout<<" - x^"<<8-i;continue;}
		}
	}
	if (a[8]!=0) 
	{
		if (a[8]>0) cout<<" + "<<a[8];
		else cout<<" - "<<-a[8];
	}
loop:cout<<endl;
	}
}