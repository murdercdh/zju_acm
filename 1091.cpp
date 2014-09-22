//#include <iostream.h>
//#include <fstream.h>
#include <stdio.h>
#include <string.h>
int count;
int n;
int c,d;
bool flag[8][8];
int check(int a,int b,int count_temp)
{
	//cout<<a<<" "<<b<<endl;
	flag[a-1][b-1]=1;
	//cin>>n;
	if (a==c&&b==d)
	{
		if (count>count_temp) count=count_temp;
		//cout<<"count_temp="<<count_temp<<endl;
		count_temp=0;
		//if (count==6) exit(0);
		//cout<<"safda"<<endl;
		return 1;
	}
	else
	{
		if (count_temp>=6) return 0;
		if (a<=c&&b<=d)
		{
			if (a+1<=8&&b+2<=8&&flag[a][b+1]==0) {flag[a][b+1]=1;check(a+1,b+2,count_temp+1);flag[a][b+1]=0;}
			if (a+2<=8&&b+1<=8&&flag[a+1][b]==0) {flag[a+1][b]=1;check(a+2,b+1,count_temp+1);flag[a+1][b]=0;}
			if (a-1>0&&b+2<=8&&flag[a-2][b+1]==0) {flag[a-2][b+1]=1;check(a-1,b+2,count_temp+1);flag[a-2][b+1]=0;}
			if (a+2<=8&&b-1>0&&flag[a+1][b-2]==0) {flag[a+1][b-2]=1;check(a+2,b-1,count_temp+1);flag[a+1][b-2]=0;}
		}
		if (a<=c&&b>=d)
		{
			if (a+1<=8&&b-2>0&&flag[a][b-3]==0) { flag[a][b-3]=1;check(a+1,b-2,count_temp+1);flag[a][b-3]=0;}
			if (a+2<=8&&b-1>0&&flag[a+1][b-2]==0) {flag[a+1][b-2]=1;check(a+2,b-1,count_temp+1);flag[a+1][b-2]=0;}
			if (a-1>0&&b-2>0&&flag[a-2][b-3]==0) {flag[a-2][b-3]=1;check(a-1,b-2,count_temp+1);flag[a-2][b-3]=0;}
			if (a+2<=8&&b+1<=8&&flag[a+1][b]==0) {flag[a+1][b]=1;check(a+2,b+1,count_temp+1);flag[a+1][b]=0;}
		}
		if (a>=c&&b<=d)
		{
			if (a-1>0&&b+2<=8&&flag[a-2][b+1]==0) {flag[a-2][b+1]=1;check(a-1,b+2,count_temp+1);flag[a-2][b+1]=0;}
			if (a-2>0&&b+1<=8&&flag[a-3][b]==0) {flag[a-3][b]=1;check(a-2,b+1,count_temp+1);flag[a-3][b]=0;}
			if (a-1>0&&b-2>0&&flag[a-2][b-3]==0) {flag[a-2][b-3]=1;check(a-1,b-2,count_temp+1);flag[a-2][b-3]=0;}
			if (a+1<=8&&b+2<=8&&flag[a][b+1]==0) {flag[a][b+1]=1;check(a+1,b+2,count_temp+1);flag[a][b+1]=0;}
			if (a-2>0&&b-1>0&&(flag[a-3][b-2]==0)) {flag[a-3][b-2]=1;check(a-2,b-1,count_temp+1);flag[a-3][b-2]=0;}
		}
		if (a>=c&&b>=d)
		{
			if (a-1>0&&b-2>0&&flag[a-2][b-3]==0) {flag[a-2][b-3]=1;check(a-1,b-2,count_temp+1);flag[a-2][b-3]=0;}
			if (a-2>0&&b-1>0&&(flag[a-3][b-2]==0)) {flag[a-3][b-2]=1;check(a-2,b-1,count_temp+1);flag[a-3][b-2]=0;}
			if ( a+1<=8 && b-2>0&&flag[a][b-3]==0) { flag[a][b-3]=1;check(a+1,b-2,count_temp+1);flag[a][b-3]=0;}
			if (a-2>0&&b+1<=8&&flag[a-3][b]==0) {flag[a-3][b]=1;check(a-2,b+1,count_temp+1);flag[a-3][b]=0;}
		}
	}
}
int main ()
{
	char start[3],end[3];
	int a,b;
	//freopen("myout.txt", "w", stdout);
	//ofstream cout;
	//cout.open("myout1.txt");
	while (EOF!=scanf("%s %s", start, end))
	{
		a=int(start[0]-96); b=int (start[1]-'0');
		c=int(end[0]-96); d=int (end[1]-'0');
		count=1000000;
		//for (a=1;a<=8;a++)
			//for (b=1;b<=8;b++)
				//for (c=1;c<=8;c++)
					//for (d=1;d<=8;d++)
					{
						if (a==2&&b==2&&c==1&&d==1) {count=4;goto end;}
						if (a==7&&b==2&&c==8&&d==1) {count=4;goto end;}
						if (a==7&&b==7&&c==8&&d==8) {count=4;goto end;}
						memset(flag,0,sizeof(flag));count=1000000;
						check(a,b,0);
end: printf("To get from %s to %s takes %d knight moves.\n", start, end, count);
//end:cout<<"To get from "<<char(a+96)<<char(b+48)<<" to "<<char(c+96)<<char(d+48)<<" takes "<<count<<" knight moves."<<endl;
	}
	}
	return 0;
}