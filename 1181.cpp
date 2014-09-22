#include <iostream.h>
#include <string.h>
#include <stdlib.h>
struct
{
	char str[100];
}dic[100];
bool check(char *a,char *b,int leg)
{
	int flag[200],i;
	memset(flag,0,sizeof(flag));
	for (i=0;i<leg;i++)
	{
		flag[a[i]]++;
		flag[b[i]]--;
	}
	for (i=0;i<200;i++) if (flag[i]) return 0;
	return 1;
}
int compare( const void *arg1, const void *arg2  )
{ 
	return strcmp((char*)arg1,(char*)arg2);//降序，这个值取负则为升序
}
void main ()
{
	char res[100];
	int leg[100];
	int t=0,leg_res,i;
	bool flag;
	while (cin>>dic[t].str)
	{
		if (strcmp(dic[t].str,"XXXXXX")==0) break;
		//leg[t]=strlen(dic[t].str);
		t++;
	}
	qsort( (void *)dic,t,sizeof(dic[0]),compare);
	for (i=0;i<t;i++) {leg[i]=strlen(dic[i].str);}
	while (cin>>res)
	{
		if (strcmp(res,"XXXXXX")==0) break;
		leg_res=strlen(res);flag=0;
		for (i=0;i<t;i++)
		{
			if (leg[i]==leg_res)
			{
				//cout<<dic[i]<<endl;
				if (check(dic[i].str,res,leg_res))
				{
					cout<<dic[i].str<<endl;
					flag=1;
				}
			}
		}
		if (flag==0) cout<<"NOT A VALID WORD\n******"<<endl;
		else cout<<"******"<<endl;
	}
}