#include <iostream.h>
int w,h,sum;
char data[21][21];
bool flag[21][21];
void find(int x,int y)
{
		sum++;
		flag[x][y]=1;
		if (data[x-1][y]=='.'&&x-1>=0&&flag[x-1][y]==0) find(x-1,y);
		if (data[x][y-1]=='.'&&y-1>=0&&flag[x][y-1]==0) find(x,y-1);
		if (data[x+1][y]=='.'&&x+1<h&&flag[x+1][y]==0) find(x+1,y);
		if (data[x][y+1]=='.'&&y+1<w&&flag[x][y+1]==0) find(x,y+1);
}
void main ()
{
	int i,j,x,y;
	while (cin>>w>>h&&w&&h)
	{
		for (i=0;i<h;i++)
		{
			for (j=0;j<w;j++)
			{
				cin>>data[i][j];
				if (data[i][j]=='@'){x=i;y=j;}
				flag[i][j]=0;
			}
		}
		sum=0;
		find(x,y);
		cout<<sum<<endl;
	}
}