#include <iostream.h>
#include <string.h>
#include <stdlib.h>
int leg_a,leg_b,leg_c,flag;
char a[210],b[210],c[420],*temp1,*temp2;
void find (char *p,char *q,char *r,int t)
{
	if (t==leg_c) {cout<<"yes"<<endl;flag=t;}
	else
	{
		if (*p==*r&&flag!=leg_c) 
		{
			if (p+1<=a+leg_a&&r+1<=c+leg_c) find (p+1,q,r+1,t+1);
		}
		if (*q==*r&&flag!=leg_c)
		{
			if (q+1<=b+leg_b&&r+1<=c+leg_c) find (p,q+1,r+1,t+1);
		}
	}
}
int check()
{//看第三个数组里面的各个元素的个数与前两个数组里面各元素的个数是否匹配; 
    int num[400],i;
    memset(num,0,sizeof(num));
    for(i=0;i<leg_c;i++)
    {
        if(i<leg_a) num[a[i]]++;//对应个数加1; 
        if(i<leg_b) num[b[i]]++;
        num[c[i]]--;
    }
    for(i=0;i<400;i++)
    if(num[i]) return 0;//存在个数不等的字符; 
    return 1;
}
void main ()
{
	int test,n;
	cin>>test;
	for (n=1;n<=test;n++)
	{
		cin>>a>>b>>c;
		cout<<"Data set "<<n<<": ";
		leg_a=strlen(a);
		leg_b=strlen(b);
		leg_c=strlen(c);
		if (leg_c!=leg_a+leg_b||check()==0)
		{
			cout<<"no"<<endl;
			continue;
		}
		flag=0;
		find(a,b,c,0);
		if (flag!=leg_c) cout<<"no"<<endl;
	}
}