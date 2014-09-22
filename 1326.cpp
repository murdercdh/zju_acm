#include <iostream.h>
#include <string.h>
void main ()
{
	int a[20],n,x,i,temp,t,j,k,m=1;
	bool flag[51];
	while (cin>>n>>x)
	{
		for (i=0;i<20;i++) cin>>a[i];
		temp=n;
		//cout<<x<<endl;
		memset(flag,0,sizeof(flag));
		for (i=0;i<20;i++)
		{
			j=a[i];
			if (j>temp) continue;
			//if (j==0) j=a[i];
			//for (int k=0;k<n;k++) cout<<flag[k];
			//cout<<endl;
			t=0;k=0;
			while (t<n)
			{
				if (flag[t]==0) k++;
				if (k==j) 
				{
					flag[t]=1;
					temp--;k=0;
					if (temp==x) break;
				}
				t++;
				//cout<<"ok"<<endl;
			}
			//cout<<temp<<"  "<<i<<endl;
			if (temp==x) break;
		}
		//cout<<temp<<endl;
		cout<<"Selection #"<<m<<endl;m++;
		for (i=0;i<n;i++)
		{
			if (flag[i]==0&&x!=1) {cout<<i+1<<" ";x--;}
			else if (flag[i]==0&&x==1) cout<<i+1<<endl<<endl;
		}
	}
}
