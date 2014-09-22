#include <iostream.h>
#include <string.h>
int code_len,n,time_n;
bool flag[100];
char start[10],code[100],end[10],temp_code[100];
void change(char *p)
{
	if (*p<='Z'&&*p>='A')//A-Z
	{
		if (p!=code) {*p='?';time_n++;}
		if (p+1<code+n) change(p+1);
		//else change(code+n-1);
	}
	else
	{
		if (*p>'0') 
		{
			*p=*p-1;time_n++;
			if (p!=code+n-1)
			{
				if (p+*p-'0'+1>code+n-1)
				{
					if (p+1<code+n-1) p++;
					else p=code+n-1;
				}
				else p+=*p-'0'+1;
				change(p);
			}
		}
	}
}
void changecontinue(int i)
{
	char *p;
	int count=0;
	p=code+i+1;
	for (;p<code+n;p++)
	{
		if (*p!=temp_code[p-code]) count++;
	}
	p=code+i;
	*p=(count%10)+'0';
}
int main ()
{
	int i;
	while (cin>>start)
	{
		if (strcmp(start,"ENDOFINPUT")==0) break;
		cin>>n;
		memset(flag,0,sizeof(flag));
		//cout<<start<<endl;
		cin>>code;  strcpy(temp_code,code);
		cin>>end;
		time_n=0;
		//
		if (code[0]!='0') change(code);
		if (code[0]>='A'&&code[0]<='Z') code[0]=(char)(time_n%10+'0');//A-Z
		for (i=0;i<n;i++)
		{
			if (code[i]<'A'||code[i]>'Z')
			{
				if (code[i]=='?')
				{
					changecontinue(i);
				}
			}
		}
		//cin.getline(end,10);
		if (strcmp(end,"END")==0) cout<<code<<endl;
	}
	return 0;
}