#include <iostream.h>
void main ()
{
	float a[12],verage=0;
	int i;
	while(cin>>a[0])
	{
		verage+=a[0];
		for(i=1;i<12;i++)
		{
			cin>>a[i];
			verage+=a[i];
		}
		verage/=12;
		cout<<"$"<<verage<<endl;
	}
}