#include <iostream.h>
#include <string.h>
int n,count;
char square[4][4];
bool flag[4][4];
void change(int a,int b)
{
	int i;
	for (i=a+1;i<n;i++) {if (square[i][b]=='X') break; flag[i][b]=1;}
	for (i=a-1;i>=0;i--) {if (square[i][b]=='X') break;flag[i][b]=1;}
	for (i=b+1;i<n;i++) {if (square[a][i]=='X') break; flag[a][i]=1;}
	for (i=b-1;i>=0;i--) {if (square[a][i]=='X') break;flag[a][i]=1;}
}
void check(int i,int j)
{
	int temp1=0,temp2=0,min=200;
	int a,b;
	if (square[i][j]=='.'&&flag[i][j]==0)
	{
		for (a=i;a<n;a++)
		{
			if (square[a][j]=='X') break;
			temp1=0;
			for (b=j;b<n;b++)
			{
				if (square[a][b]=='X') break;
				if (flag[a][b]==0) {temp1++;}
			}
			if (temp1<min) {min=temp1;temp2=a;}
		}
		if (min!=200) {flag[temp2][j]=1;change(temp2,j);count++;}
		//cout<<"("<<temp2<<","<<j<<")"<<endl;
	}
	if (i+1<n) check(i+1,j);
	if (j+1<n) check(i,j+1);
}
int main ()
{
	int i,j;
	while (cin>>n&&n)
	{
		for (i=0;i<n;i++)
		{
			for (j=0;j<n;j++)
			{
				cin>>square[i][j];
			}
		}
		memset(flag,0,sizeof(flag));
		count=0;
		check(0,0);
		cout<<count<<endl;
	}
}
