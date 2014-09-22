#include <iostream.h>
#include <string.h>
void main ()
{
	char bitmap[32][33],path;
	int i,j,test,x,y,n=1;
	cin>>test;
	while (test)
	{
		test--;
		memset(bitmap,'.',sizeof(bitmap));
		cin>>x>>y;
		while (cin>>path)
		{
			if (path=='.') break;
			switch(path)
			{
			case 'E':{if (y-1>=0) bitmap[y-1][x]='X'; x++; break;}
			case 'W':{x--;if (x>=0) bitmap[y][x]='X'; break;}
			case 'N':{bitmap[y][x]='X'; y++; break;}
			case 'S':{y--;if (y>=0,x-1>=0) bitmap[y][x-1]='X'; break;}
			}
		}
		cout<<"Bitmap #"<<n<<endl;n++;
		for (i=31;i>=0;i--)
		{
			for (j=0;j<32;j++)
			{
				cout<<bitmap[i][j];
			}
			cout<<endl;
		}
		cout<<endl;
	}
}
//倒着想，把题中的最后一排看成第一排；所以遇到N,S时，操作要反过来。
//正常时，N是y--,S是y++,反过来后则变成了N是y++,S是y--
//由于是逆时针走，则每个方向的操作方向也可以确定下来；E是操作下面的；W是操作上面的；N是操作右面的；S是操作左面的
//由于点的坐标不是和格子的坐标严格一一对应的，因此要做一些变换：
//E：先变，再变坐标（横轴），纵轴正常情况是变下面一个，即表现为变bitmap[y+1][x],但现在是反过来的，因此变bitmap[y-1][x]
//W：先变坐标，再变
//N：先变，再变坐标
//S：先变坐标，再变
