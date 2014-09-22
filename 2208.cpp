#include <iostream.h>
#include <string.h>
void main ()
{
	char chr[200],newchar[20][20];
	int n,i,j,len,a,b;
	while (cin>>n)
	{
		if (n==0) break;
		cin>>chr;
		len=strlen(chr);b=0;a=0;i=0;
		while (i<len)
		{
			while (b<n)
			{if(i>=len) goto end;newchar[a][b]=chr[i];b++;i++;}
			a++;
			while(b>0)
			{if (i>=len) goto end;b--;newchar[a][b]=chr[i];i++;}
			a++;
		}
end:
		for (j=0;j<n;j++)
		{
			for (i=0;i<a;i++)
			{
				cout<<newchar[i][j];
			}
		}
		cout<<endl;
	}
}