#include <iostream.h>
#include <string.h>
/*
void main ()
{
	char momey[15];
	int data[2],i,j,len,n;
	while (cin>>n)
	{
		data[1]=0;
		for (i=0;i<n;i++)
		{
			cin>>momey;
			len=strlen(momey);
			data[0]=0;
			for (j=0;j<len;j++)
			{
				if (momey[j]>='0'&&momey[j]<='9')
				{
					data[0]*=10;
					data[0]+=momey[j]-'0';
				}
			}
			data[1]+=data[0];
		}
		cout<<data[1]<<endl;
		cout<<"$";
again:if(data[1]<=99999)
		{
			cout<<data[1]/100<<"."<<data[1]%100<<endl;
			continue;
		}
again1:if (data[1]<=99999999) {cout<<data[1]/100000<<",";data[1]%=100000;goto again;}
	  if (data[1]<=999999999) {cout<<data[1]/100000000<<",";data[1]%=100000000;goto again1;}
	}
}*/
void main ()
{
	char momey[15],res[15];
	int i,len,j,n,c,a;
	while (cin>>n&&n)
	{
		strcpy(res,"$00,000,000.00");
		for (i=0;i<n;i++)
		{
			cin>>momey;
			len=strlen(momey);c=0;a=13;
			for (j=len-1;j>0;j--)
			{
				if (momey[j]>='0'&&momey[j]<='9')
				{
					res[a]=momey[j]+res[a]-'0'+c;
					if (res[a]>'9')
					{
						res[a]-=10;c=1;
					}
					else c=0;
					a--;
				}
				else a--;
			}
	  again:if (c==1) 
			{
				if (res[a]>='0'&&res[a]<='9')
				{
					res[a]+=1;
					if (res[a]>'9')
					{
						res[a]-=10;
						c=1;
						a--;
						goto again;
					}
				}
				else {a--;goto again;}
			}
		}
		for (i=1;i<=14;i++)
		{
			if (res[i]!='0'&&res[i]!=',') break;
		}
		cout<<"$";
		if (i==11) cout<<"0";
		for (;i<14;i++) cout<<res[i];
		cout<<endl;
	}
}
