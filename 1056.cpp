#include <iostream.h>
#include <string.h>
struct
{
	int x;
	int y;
}worm[20];
void main ()
{
	int n,head,tail;
	char direction;
	int i,sign,tempx,tempy,step;
	bool flag[50][50];
	while (cin>>n&&n)
	{
		memset(flag,0,sizeof(flag));
		for (i=0;i<=19;i++)
		{
			worm[i].x=25;
			worm[i].y=i+11;
			flag[worm[i].x][worm[i].y]=1;
		}
		/*
		for (i=0;i<35;i++)
		{
			for (int j=0;j<35;j++)
			{
				cout<<flag[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
		*/
		tail=0;head=19;sign=0;
		for (i=1;i<=n;i++)
		{
			cin>>direction;
			if (direction=='E'&&sign==0)
			{
				flag[worm[tail].x][worm[tail].y]=0;
				tail++;if (tail==20) tail=0;
				tempx=worm[head].x;
				tempy=worm[head].y;
				head++;if (head==20) head=0;
				worm[head].x=tempx;
				worm[head].y=tempy+1;
				if (worm[head].y>50) {sign=1;step=i;}
				else if (flag[worm[head].x][worm[head].y]) {sign=2;step=i;}
				flag[worm[head].x][worm[head].y]=1;
			}
			if (direction=='W'&&sign==0)
			{
				flag[worm[tail].x][worm[tail].y]=0;
				tail++;if (tail==20) tail=0;
				tempx=worm[head].x;
				tempy=worm[head].y;
				head++;if (head==20) head=0;
				worm[head].x=tempx;
				worm[head].y=tempy-1;
				if (worm[head].y<1) {sign=1;step=i;}
				else if (flag[worm[head].x][worm[head].y]) {sign=2;step=i;}
				flag[worm[head].x][worm[head].y]=1;
			}
			if (direction=='N'&&sign==0)
			{
				flag[worm[tail].x][worm[tail].y]=0;
				tail++;if (tail==20) tail=0;
				tempx=worm[head].x;
				tempy=worm[head].y;
				head++;if (head==20) head=0;
				worm[head].x=tempx+1;
				worm[head].y=tempy;
				if (worm[head].x>50) {sign=1;step=i;}
				else if (flag[worm[head].x][worm[head].y]) {sign=2;step=i;}
				flag[worm[head].x][worm[head].y]=1;
			}
			if (direction=='S'&&sign==0)
			{
				flag[worm[tail].x][worm[tail].y]=0;
				tail++;if (tail==20) tail=0;
				tempx=worm[head].x;
				tempy=worm[head].y;
				head++;if (head==20) head=0;
				worm[head].x=tempx-1;
				worm[head].y=tempy;
				if (worm[head].x<1) {sign=1;step=i;}
				else if (flag[worm[head].x][worm[head].y]) {sign=2;step=i;}
				flag[worm[head].x][worm[head].y]=1;
			}
			//cout<<worm[head].x<<" "<<worm[head].y<<endl;
		}
		if (sign==0) cout<<"The worm successfully made all "<<n<<" moves."<<endl;
		else if (sign==1) cout<<"The worm ran off the board on move "<<step<<"."<<endl;
		else if (sign==2) cout<<"The worm ran into itself on move "<<step<<"."<<endl;
	}
}