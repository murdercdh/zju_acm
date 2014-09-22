#include <iostream.h>
#include <math.h>
#include <string.h>
void main ()
{
	int test,i,j,n,k,a[10001],b[200],t,q;
	bool flag[100];
	while (cin>>test)
	{
		while (test)
		{
			test--;
			cin>>n>>k;
			flag[0]=0;
			for (i=0;i<n;i++) {cin>>a[i];a[i]%=k;while(a[i]<0) a[i]+=k;a[i]%=k;}
			if (n==1) {if (a[0]%k==0) flag[0]=1;else flag[0]=0;goto end;}
			if (n==2) 
			{
				if ( (a[0]+a[1] )%k==0 || ( a[0]>a[1]? (a[0]-a[1]): ((a[0]-a[1])%k+k) )%k==0 ) flag[0]=1;
				else flag[0]=0; goto end;
			}
			memset(flag,0,sizeof(flag));
			flag[a[0]]=1;
			for (i=1;i<n;i++)
			{
				t=0;
				for (j=0;j<k;j++)
				{
					if (flag[j]!=0)
					{
						b[t]=j;t++;
					}
				}
				for (q=0;q<t;q++)
				{
					flag[b[q]]=0;
					flag[(b[q]+a[i])%k]=1;
					flag[b[q]<a[i]?(k+(b[q]-a[i])%k):(b[q]-a[i])%k]=1;
					//if (i==n-1&&flag[0]==1) goto end;
				}
			}
end:
			if (flag[0]==1) cout<<"Divisible"<<endl;
			else cout<<"Not divisible"<<endl;
			if (test) cout<<endl;
		}
	}
}