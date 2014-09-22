#include <iostream.h>
#include <string.h>
void main ()
{
	int n,count,i,j,num,num_bed,leg;
	char bed[21],customers[1000];
	while (cin>>n&&n)
	{
		cin>>customers;
		leg=strlen(customers);
		for (i=0;i<n;i++) bed[i]='+';
		num=0;num_bed=0;count=0;
		for (i=0;i<leg;i++)
		{
			//cout<<customers[i]<<endl;
			for (j=0;j<n;j++)
			{
				if (customers[i]==bed[j]) {bed[j]='+';num_bed--;break;}
			}
			if (j==n&&num_bed<n)
			{
				num=0;
				while (bed[num]!='+')
				{
					num++;
				}
				bed[num]=customers[i];
				num_bed++;
			}
			else if (num_bed>=n) count++;
		}
		if (count==0) cout<<"All customers tanned successfully."<<endl;
		else cout<<count/2<<" customer(s) walked away."<<endl;
	}
}