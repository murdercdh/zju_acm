#include <iostream.h>
#include <math.h>
void main ()
{
	int n;
	char ip[34];
	while (cin>>n)
	{
		if (n<1||n>9) break;
		while (n)
		{
			n--;
			cin>>ip;
			int temp=0;
			for (int i=1;i<34;i++)
			{
				
				if (ip[i-1]=='1')
				{
					temp+=(int)pow(2,8-(i%8==0?8:i%8));
				}
				if (i==8||i==16||i==24)
				{
					cout<<temp<<".";
					temp=0;
				}
				else if(i==32) cout<<temp<<endl;
				
				//cout<<ip[i-1];
			}
		}
	}
}