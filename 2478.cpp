#include <iostream.h>
#include <stdio.h>
#include <string.h>
void main ()
{
	char data[110];
	int i,n,len,m;
	while(scanf("%d",&n)!=EOF)
	{
		gets(data);
		while (n)
		{
			n--;
			gets(data);
			len=strlen(data);m=0;
			for (i=0;i<len;i++)
			{
				if (data[i]!=data[i+1]) 
				{
					if (m==0) cout<<data[i];
					else cout<<m+1<<data[i];
					m=0;
				}
				else m++;
			}
			cout<<endl;
		}
	}
}