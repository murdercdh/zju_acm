/*
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
void main ()
{
	int n,point[10][4][2],i,j,flag1,flag2;
	double k1,k2,x,y;
	cin>>n;
	for (i=0;i<n;i++)
	{
		for (j=0;j<4;j++)
		{
			cin>>point[i][j][0]>>point[i][j][1];
		}
	}
	cout<<"INTERSECTING LINES OUTPUT"<<endl;
	for (i=0;i<n;i++)
	{
		flag1=0;flag2=0;
		if (point[i][1][0]-point[i][0][0]==0) flag1=1;
		else k1=(point[i][1][1]-point[i][0][1])*1.0/(point[i][1][0]-point[i][0][0]);
		if (point[i][3][0]-point[i][2][0]==0) flag2=1;
		k2=(point[i][3][1]-point[i][2][1])*1.0/(point[i][3][0]-point[i][2][0]);
		//cout<<k1<<"   "<<k2<<endl;
		//cout<<flag1<<"  "<<flag2<<endl;
		if (k2==k1||(flag1==flag2&&flag1==1))
		{
			if (flag1)
			{
				if (point[i][0][0]==point[i][2][0]) cout<<"LINE"<<endl;//重合
				else cout<<"NONE"<<endl;//平行
			}
			else
			{
				y=k1*(point[i][2][0]-point[i][0][0])+point[i][0][1];
				if (fabs(y-point[i][2][1])<0.000001) cout<<"LINE"<<endl;//重合
				else cout<<"NONE"<<endl;//平行
			}
		}
		else
		{
			if (flag1==flag2&&flag1==0)
			{
				x=(k1*point[i][0][0]-k2*point[i][2][0]+point[i][2][1]-point[i][0][1])/(k1-k2);
				y=k1*(x-point[i][0][0])+point[i][0][1];
			}
			else if (flag1==1&&flag2==0)
			{
				x=point[i][0][0];
				y=k2*(x-point[i][2][0])+point[i][2][1];
			}
			else if (flag1==0&&flag2==1)
			{
				x=point[i][2][0];
				y=k1*(x-point[i][0][0])+point[i][0][1];
			}
			cout<<"POINT "<<setiosflags(ios::fixed)<<setprecision(2)<<x<<" "<<y<<endl;
		}
	}
	cout<<"END OF OUTPUT"<<endl;
}
*/
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int n,i,a1,b1,a2,b2,a3,b3,a4,b4;
	double t,s,x,y;
	cin>>n;
	cout<<"INTERSECTING LINES OUTPUT"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a1>>b1>>a2>>b2>>a3>>b3>>a4>>b4;
		if(a1==a2)
		{
			x=a1;
			if(a3==a4&&a3!=a1) {cout<<"NONE"<<endl; continue;}
			else if(a3==a4&&a3==a1) {cout<<"LINE"<<endl; continue;}
			else 
			{
				cout<<"POINT ";
				y=b3+(double)(b3-b4)*(x-a3)/(a3-a4);
				cout<<setiosflags(ios::fixed)<<setprecision(2)<<x<<' ';
				cout<<setiosflags(ios::fixed)<<setprecision(2)<<y<<endl;
			}
		}
		else
		{
			s=(double)(b1-b2)/(a1-a2);
			if(a3==a4)
			{
				x=a3;
				y=b1+s*(x-a1);
				cout<<"POINT ";
				cout<<setiosflags(ios::fixed)<<setprecision(2)<<x<<' ';
				cout<<setiosflags(ios::fixed)<<setprecision(2)<<y<<endl;
			}
			else
			{
				t=(double)(b3-b4)/(a3-a4);
				if(s!=t)
				{
					cout<<"POINT ";
					x=(b1-b3+t*a3-s*a1)/(t-s);
					y=b1+s*(x-a1);
					cout<<setiosflags(ios::fixed)<<setprecision(2)<<x<<' ';
				    cout<<setiosflags(ios::fixed)<<setprecision(2)<<y<<endl;
				}
				else
				{
					if(s*(a3-a1)==b3-b1) cout<<"LINE"<<endl;
					else cout<<"NONE"<<endl;
				}
			}
		}
	}
	cout<<"END OF OUTPUT"<<endl;
	return 1;
}