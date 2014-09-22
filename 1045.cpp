#include <iostream.h>
void main ()
{
	float len,temp;
	int i;
	while (cin>>len&&len)
	{
		if (len<=0.5) {cout<<"1 card(s)"<<endl;continue;}
		for (i=2;;i++)
		{
			temp=(float)1.0/i;
			if (len>temp) len-=temp;
			else break;
		}
		cout<<i-1<<" card(s)"<<endl;
	}
}