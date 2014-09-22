#include <iostream.h>
#include <string.h>
double res;
int flag=0;
int radius,oil,degree;
int main ()
{
	char temp[10];
	while (cin>>temp)
	{
		if (strcmp(temp,"ENDOFINPUT")==0) break;
		else if (strcmp(temp,"START")==0)
		{
			cin>>radius>>oil>>degree;
			if (degree>180) degree=360-degree;
			double distance=(double)degree/180*3.14159*radius;
			res=oil*5.0;
			if (distance*2>res) flag=1;
			else {res=oil-distance*2/5;flag=0;}
		}
		else if (strcmp(temp,"END")==0)
		{
			if (flag==0) cout<<"YES "<<(int)res<<endl;
			else cout<<"NO "<<oil*5<<endl;
		}
	}
}