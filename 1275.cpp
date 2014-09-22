#include <stdio.h>
#include <string.h>
char num[15];
bool check(int t)
{
	int i,temp[10];
	for (i=0;i<10;i++) temp[i]=0;
	for (i=0;i<t;i++) temp[num[i]-'0']++;
	for (i=0;i<10;i++) if (temp[i]>=2) return 1;
	return 0;
}
void main ()
{
	unsigned n,temp;
	char c;
	int i,j,t,flag,m,k,p=1;
	bool sign[15];
	while (EOF!=scanf("%d",&n)&&n)
	{
		while (1)
		{
			n++;
			t=0;
			temp=n;flag=0;
			while (temp)
			{
				num[t]=temp%10+'0';
				sign[t]=0;
				if (num[t]==0) {flag=1;break;}
				temp/=10;
				t++;
			}
			if (flag==1) continue;j=t-1;
			for (i=0;i<t/2;i++)
			{
				c=num[i];
				num[i]=num[t-i-1];
				num[t-i-1]=c;
			}
			if (check(t)) continue;
			j=0;sign[0]=1;m=0;
			while (1)
			{
				/*
				for (i=0;i<num[j]-'0';i++)
				{
					m++;
					if (m==t) m=0;
				}
				*/
				m+=num[j]-'0';
				m%=t;
				for (k=0;k<t;k++) if (sign[k]==0) break;
				if (k==t&&m==0) goto end;
				else if (k==t&&m) break;
				if (sign[m]==0) {j=m;sign[m]=1;}
				else break;
			}
		}
end:
		printf ("Case %d: %d\n",p,n);p++;
	}
}
