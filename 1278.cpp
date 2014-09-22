#include <iostream.h>
void main ()
{
	int Z,I,M,L;
	int time=0,leg,temp,t,i;
	int num[100000],postion;
	bool flag;
	while (cin>>Z>>I>>M>>L)
	{
		if (Z==0&&I==0&&M==0&&L==0) break;
		time++;t=L;
		temp=(Z*L+I)%M;
		if (temp!=t) leg=1;
		else leg=0;
		num[0]=L;num[1]=temp;postion=2;
		if (L==temp) leg=0;
		else
		{
			while (1)
			{
				L=temp;
				temp=(Z*L+I)%M;
				num[postion]=temp;postion++;
				flag=0;
				for (i=0;i<postion-1;i++)
				{
					if (num[i]==temp)
					{
						flag=1;
						break;
					}
				}
				if (flag==1) {leg=postion-i-1;break;}
			}
		}
		cout<<"Case "<<time<<": "<<leg<<endl;
	}
}