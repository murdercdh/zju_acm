#include <iostream.h>
void main ()
{
	int n,window[10][4],m,point[2],i,j;
	while (cin>>n&&n)
	{
		for (i=n-1;i>=0;i--)
		{
			cin>>window[i][0]>>window[i][1]>>window[i][2]>>window[i][3];
		}
		cin>>m;
		for (i=0;i<m;i++)
		{
			cin>>point[0]>>point[1];
			//b=0;
			for (j=0;j<n;j++)
			{
				if (point[0]>=window[j][0]&&point[0]<=window[j][2]&&point[1]>=window[j][1]&&point[1]<=window[j][3])
				{
					//b++;
					//a=n-j-1;
					cout<<n-j-1<<endl;
					break;
				}
			}
			if (j==n) cout<<"-1"<<endl;
			//if (b==0) cout<<"-1"<<endl;
			//else cout<<a<<endl;
		}
	}
}
