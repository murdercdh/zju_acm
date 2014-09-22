#include <stdio.h>
#include <string.h>
#include <math.h>
void main ()
{
	char data[50],butter[2];
	int sum=0,i,len,t,j;
	while (gets(data)!=NULL)
	{
		if (strcmp(data,"0")==0) {printf ("%d\n",sum);sum=0;continue;}
		if (strcmp(data,"#")==0) break;
		len=strlen(data);t=0;j=0;
		//printf ("%c",data[len+1]);
		for (i=len-3;i>=0;i--)
		{
			if (data[i]>='0'&&data[i]<='9')
			{
				t+=(int)(data[i]-'0')*pow(10,j);
				j++;
			}
			else break;
		}
		if (data[len-1]=='F') {sum+=2*t;continue;}
		if (data[len-1]=='B') 
		{
			sum+=(t+t+t)/2;
			continue;
		}
		if (data[len-1]=='Y') {if (t<=500) sum+=500;else sum+=t;}
	}
}