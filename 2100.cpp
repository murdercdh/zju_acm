#include <iostream.h>
int n,m;
int total;
char area[7][7];
bool flag[7][7],sign;
void search(int x,int y,int count)
{
	if (count==total) {sign=1;return;}
	if (flag[x][y]==0&&area[x][y]=='.')
	{
		flag[x][y]=1;
		if (x-1>=0&&sign==0) search(x-1,y,count+1);
		if (x+1<n&&sign==0) search(x+1,y,count+1);
		if (y-1>=0&&sign==0) search(x,y-1,count+1);
		if (y+1<m&&sign==0) search(x,y+1,count+1);
		flag[x][y]=0;
	}
	return;
}
void main ()
{
	int i,j;
	while (cin>>n>>m)
	{
		if (n==0&&m==0) break;
		total=0;
		for (i=0;i<n;i++)
		{
			for (j=0;j<m;j++)
			{
				cin>>area[i][j];
				flag[i][j]=0;
				if (area[i][j]=='.') total++;
			}
		}
		//cout<<total<<endl;
		sign=0;
		search(0,0,0);
		if (sign==0) cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	}
}