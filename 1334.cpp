#include <iostream.h>
#include <stdio.h>
void main ()
{
	char data[7],num[7];
	int i,sum,n,m,temp,j;
	while (cin>>data>>n>>m) 
	{
		sum=0;
		for (i=0;data[i]!='\0';i++)
		{
			if (data[i]<='9'&&data[i]>='0') {sum=(data[i]-'0')+sum*n;continue;}
			if (data[i]<='F'&&data[i]>='A') sum=(data[i]-'A'+10)+sum*n;
		}
		i=6; 
        while(1)
		{ 
            if(i<0) break; 
            temp=sum%m; 
            if(temp>=0&&temp<=9) num[i]=temp+'0'; 
            else num[i]=temp-10+'A'; 
            sum/=m; 
            if(sum==0) break; 
            i--; 
        } 
        if(i<0)
		{ 
            cout<<"  ERROR"<<endl; 
            continue; 
        } 
        for(j=0;j<i;j++) cout<<" "; 
        for(j=i;j<7;j++) cout<<num[j]; 
        cout<<endl; 
	}
}