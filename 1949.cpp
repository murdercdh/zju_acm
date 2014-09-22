#include <iostream.h>
#include <string.h>
void main ()
{
	int matrix[100][100];
	int n,x[100],y[100],i,j,change_x,change_y,flag_x,flag_y;//x为每一列的的和，y为每一行的和
	while (cin>>n&&n)
	{
		memset(x,0,sizeof(x));
		memset(y,0,sizeof(y));
		for (i=0;i<n;i++)
		{
			for (j=0;j<n;j++)
			{
				cin>>matrix[i][j];
				y[i]+=matrix[i][j];
				x[j]+=matrix[i][j];
			}
		}
		change_x=0;change_y=0;flag_x=0;flag_y=0;
		for (i=0;i<n;i++)
		{
			if (x[i]%2) {change_x=i;flag_x++;if (flag_x==2) break;}
			if (y[i]%2) {change_y=i;flag_y++;if (flag_y==2) break;}
		}
		if (flag_x==2||flag_y==2) cout<<"Corrupt"<<endl;
		else if (change_x==0&&change_y==0) cout<<"OK"<<endl;
		else cout<<"Change bit ("<<change_y+1<<","<<change_x+1<<")"<<endl;
	}
}