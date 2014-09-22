#include <iostream.h>
#include <string.h>
#include <stdio.h>
void main ()
{
	int test,time,i,lrs,lws;
	char ws[90],rs[90],asd[2];
	while (cin>>test)
	{
		while (test)
		{
			test--;
			scanf("%d",&time);
			gets (asd);
			gets(rs);gets(ws);
			lrs=strlen(rs);
			for (i=0;i<lrs;i++)
			{
				if (rs[i]!=ws[i]) break;
			}
			lws=strlen(ws);
			cout<<(lws-i+lrs-i)*time<<endl;
		}
	}
}