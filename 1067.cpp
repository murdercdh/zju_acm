#include <iostream.h>
#include <math.h>
void main ()
{
	int stand[16][3],a[3],i,b[3];
	double d,temp;
	for (i=0;i<16;i++)
	{
		cin>>stand[i][0]>>stand[i][1]>>stand[i][2];
	}
	while (cin>>a[0]>>a[1]>>a[2]&&a[0]!=-1&&a[1]!=-1&&a[2]!=-1)
	{
		d=9999999;
		for (i=0;i<16;i++)
		{
			temp=sqrt((a[0]-stand[i][0])*(a[0]-stand[i][0])+(a[1]-stand[i][1])*(a[1]-stand[i][1])+(a[2]-stand[i][2])*(a[2]-stand[i][2]));
			if (temp==0) {b[0]=stand[i][0];b[1]=stand[i][1];b[2]=stand[i][2];break;}
			else if (d>temp) {d=temp;b[0]=stand[i][0];b[1]=stand[i][1];b[2]=stand[i][2];}
		}
		cout<<"("<<a[0]<<","<<a[1]<<","<<a[2]<<") maps to ("<<b[0]<<","<<b[1]<<","<<b[2]<<")"<<endl;
	}
}