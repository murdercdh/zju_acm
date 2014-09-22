#include <iostream.h>
#include <string.h>
char area[101][101];
bool flag[101][101];
int n,m,pockets;
void find(int i,int j)
{
	area[i][j]='*';
	flag[i][j]=1;
   if(area[i][j+1]=='@'&&flag[i][j+1]==0) 
      find(i, j+1); 
   if(area[i+1][j]=='@'&&flag[i+1][j]==0) 
      find(i+1, j); 
   if(area[i+1][j+1]=='@'&&flag[i+1][j+1]==0) 
      find(i+1, j+1); 
   if(i>0&&area[i-1][j+1]=='@'&&flag[i-1][j+1]==0) 
      find(i-1, j+1); 
   if(j>0&&area[i+1][j-1]=='@'&&flag[i+1][j-1]==0) 
      find(i+1, j-1); 
   if(j>0&&i>0&&area[i-1][j-1]=='@'&&flag[i-1][j-1]==0) 
      find(i-1, j-1);
   if(j>0&&area[i][j-1]=='@'&&flag[i][j-1]==0)
	  find(i,j-1);
   if(i>0&&area[i-1][j]=='@'&&flag[i-1][j]==0)
      find(i-1,j);
}//只要保证i>=0,j>=0即可
void main ()
{
	while (cin>>m>>n&&m&&n)
	{
		int i,j;
		pockets=0;
		for (i=0;i<m;i++)
		{
			for (j=0;j<n;j++)
			{
				cin>>area[i][j];
			}
		}
		memset(flag,0,sizeof(flag));
		for (i=0;i<m;i++)
		{
			for (j=0;j<n;j++)
			{
				if (flag[i][j]==0)
				{
					if (area[i][j]=='@')
					{
						//pockets+=find(i,j);
						find(i,j);
						pockets++;
					}
					else flag[i][j]=1;
				}
			}
		}
		cout<<pockets<<endl;
	}
}