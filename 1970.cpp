#include <iostream.h>
#include <string.h>
void main ()
{
	char s[100],t[100];
	int i,j,ls,lt;
	while (cin>>s>>t)
	{
		ls=strlen(s);
		lt=strlen(t);
		if (ls>lt) {cout<<"No"<<endl;continue;}
		j=0;
		for (i=0;i<lt;i++)
		{
			if (t[i]==s[j])
			{
				j++;
			}
		}
		if (j==ls) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
}
