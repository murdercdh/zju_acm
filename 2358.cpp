#include <iostream.h>
void main ()
{
	int a[10]={1,1,2,6,24,120,720,5040,40320,362880},i,num;
	//a[0]=1;
	//for (i=1;i<9;i++)
	//{
		//a[i]=a[i-1]*(i+1);
		//cout<<a[i]<<endl;
	//}
	while(cin>>num)
	{
		if (num<0) break;
		if (num==0) {i=-1;goto end;}
		for (i=9;i>=0;i--)
		{
			if (a[i]<num) num-=a[i];
			else if (num==a[i]) {cout<<"YES"<<endl;break;}
		}
end:if (i==-1) cout<<"NO"<<endl;
	}
}