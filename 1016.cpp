#include <iostream.h>
void main ()
{
	int test,n;
	int temp1,temp2,i,j,k,t;
	char parentheses[50];
	bool flag[50];
	cin>>test;
	while (test)
	{
		test--;
		cin>>n;
		cin>>temp1;
		for (i=0;i<temp1;i++)
		{
			parentheses[i]='(';
			flag[i]=0;
		}
		parentheses[i]=')';flag[i]=0;i++;
		while (n-1)
		{
			n--;
			cin>>temp2;
			if (temp2==temp1){parentheses[i]=')';flag[i]=0;i++;}
			else
			{
				for (j=0;j<temp2-temp1;j++)
				{
					parentheses[i]='(';flag[i]=0;
					i++;
				}
				parentheses[i]=')';
				flag[i]=0;
				i++;
				temp1=temp2;
			}
		}
		//for (j=0;j<i;j++) cout<<parentheses[j];
		//cout<<endl;
		for (j=0;j<i;j++)
		{
			if (parentheses[j]==')')
			{
				k=j-1;t=1;
				//cout<<k<<endl;
				while(k>=0) 
				{
					if ( parentheses[k]=='('&&flag[k]) t++;
					else if (parentheses[k]=='('&&flag[k]==0) break;
					k--;
				}
				flag[k]=1;
				if (j==i-1) cout<<t<<endl;
				else cout<<t<<" ";
			}
		}
	}
}