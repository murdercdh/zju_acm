#include <iostream.h>
#include <string.h>
void main ()
{
	int n,i,t=1,sign;
	char values[1000][3];
	bool flag,define[27];
	while (cin>>n&&n)
	{
		flag=1;
		for (i=0;i<n;i++) 
		{
			cin>>values[i][0]>>values[i][1]>>values[i][2];
		}
		memset(define,0,sizeof(define));
		define[0]=1;
		for (i=0;i<n;i++)
		{
			if (define[values[i][2]-'a']==1) {define[values[i][0]-'a']=1;}
			else if (define[values[i][0]-'a']==1) {define[values[i][0]-'a']=0;}
		}
		cout<<"Program #"<<t<<endl;
		sign=0;
		for(i=0;i<26;i++)
			if(define[i]==1)
			{
				cout<<(char)(i+97)<<' ';
				sign=1;
			}
		if(sign==0) cout<<"none";
		cout<<endl<<endl;
		t++;
	}
}
