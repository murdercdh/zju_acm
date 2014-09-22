#include <iostream.h>
int fun (int a,int b)
{
	int c,i;
	c=a+b;
	for (i=1;;i++)
	{
		if (i*i==c) return 1;
		else if (i*i>c) return 0;
	}
};
void main ()
{
	int num[100],p,a[100],i,j,t,q;
	cin>>p;
	for (i=0;i<p;i++)
	{
		cin>>num[i];
	}
	for (q=0;q<p;q++)
	{
		for (i=0;i<num[q];i++)
		{
			a[i]=0;
		}
		for (j=1;;j++)
		{
			t=0;
			for (i=0;i<num[q];i++)
			{
				t++;
			loop:if (a[i]==0) {a[i]=j;break;}
				else
				{
					if (fun(a[i],j)==1)
					{
						a[i]=j;
						break;
					}
					else
					{
						if (i+1==num[q]&&a[i])
						{
							i=0;
							if (t>num[q]) goto loop1;
							goto loop;
						}
					}
				}
			}
			if (i==num[q]) break;
		}
	loop1:cout<<j-1<<endl;
	}
}
