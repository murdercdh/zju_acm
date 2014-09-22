#include <iostream.h>
char diamond[8][8];
bool flag;
void check(char *p,int x,int y)
{
	if (p+1<=&diamond[x-1][7]&&p-1>=&diamond[x-1][0])
	{
		if (*p==*(p+1)&&*p==*(p-1)) {flag=1;return;}
	}
	if (p+2<=&diamond[x-1][7])
	{
		if (*p==*(p+1)&&*p==*(p+2)) {flag=1;return;}
	}
	if (p-2>=&diamond[x-1][0])
	{
		if (*p==*(p-1)&&*p==*(p-2)) {flag=1;return;}
	}
	if (x-1>0&&x<8)
	{
		if (*p==diamond[x-2][y-1]&&*p==diamond[x][y-1]) {flag=1;return;}
	}
	if (x-2>0)
	{
		if (*p==diamond[x-2][y-1]&&*p==diamond[x-3][y-1]) {flag=1;return;}
	}
	if (x+1<8)
	{
		if (*p==diamond[x][y-1]&&*p==diamond[x+1][y-1]) {flag=1;return ;}
	}
}
bool able (int a,int b,int c,int d)
{
	if (a<0||a>7) return 0;
	if (b<0||b>7) return 0;
	if (c<0||c>7) return 0;
	if (d<0||d>7) return 0;
	if ((a==c+1||a==c-1)&&b==d) return 1;
	else if ((b==d+1||b==d-1)&&a==c) return 1;
	else return 0;
}
void main ()
{
	int a,b,c,d,i,j,t;
	while (cin>>diamond[0][0])
	{
		for (i=0;i<8;i++)
		{
			for (j=0;j<8;j++)
			{
				if (i==0&&j==0) continue;
				cin>>diamond[i][j];
				//cin>>diamond[i][j];
			}
		}
		cin>>a>>b>>c>>d;
		flag=0;
		if (able(a-1,b-1,c-1,d-1))
		{
			t=diamond[a-1][b-1];
			diamond[a-1][b-1]=diamond[c-1][d-1];
			diamond[c-1][d-1]=t;
		}
		else goto end;
		check(&diamond[a-1][b-1],a,b);
		if (flag==1) goto end;
		check(&diamond[c-1][d-1],c,d);
end:
		if (flag) cout<<"Ok!"<<endl;
		else cout<<"Illegal move!"<<endl;
	}
}
