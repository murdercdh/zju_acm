#include <iostream.h>
#include <string.h>
void main ()
{
	char URL[61];
	int i,len,n,j;
	while (cin>>n)
	{
		for (i=1;i<=n;i++)
		{
			cin>>URL;
			cout<<"URL #"<<i<<endl<<"Protocol = ";
			len=strlen(URL);
			for (j=0;j<len;j++)
			{
				if (URL[j]!=':') cout<<URL[j];
				else break;
			}
			cout<<endl<<"Host     = ";
			j+=3;
			for (;j<len;j++)
			{
				if (URL[j]!=':'&&URL[j]!='/') cout<<URL[j];
				else break;
			}
			cout<<endl<<"Port     = ";j++;
			if (URL[j]<'0'||URL[j]>'9'||j>=len) cout<<"<default>"<<endl;
			else
			{
				for (;j<len;j++)
				{
					if (URL[j]>='0'&&URL[j]<='9') cout<<URL[j];
					else break;
				}
				cout<<endl;
			}
			cout<<"Path     = ";
			if (j>=len) {cout<<"<default>"<<endl<<endl;continue;}
			if (URL[j]=='/') j++;
			for (;j<len;j++) cout<<URL[j];
			cout<<endl<<endl;
		}
	}
}