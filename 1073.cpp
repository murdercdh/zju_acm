#include <iostream.h>
#include <string.h>
char temp[100],cyclic[61],str[61];
int leg;
bool flag;
void mul(int n)
{
	int i;
	int j=0,t,c=0;
	for (i=0;i<leg;i++)
	{
		t=((cyclic[i]-'0')*n+c)%10;
		if ((cyclic[i]-'0')*n+c>9) c=((cyclic[i]-'0')*n+c)/10;
		else c=0;
		temp[j]=t+'0';j++;
	}
	while (c)
	{
		temp[j]=c%10+'0';
		c/=10;j++;
	}
	//cout<<"+++++++\n"<<temp<<"   i="<<n<<"\n++++++++"<<endl;
	if (j>60) {flag=1;return;}
	if ((int)strlen(temp)!=leg) {flag=1;return;}
}
void move()
{
	int i;
	char t;
	t=temp[0];
	for (i=0;i<leg-1;i++) temp[i]=temp[i+1];
	temp[i]=t;
	//cout<<temp<<endl;
}
bool check()
{
	int num[100],i;
	bool yes=0;
	for (i=0;i<100;i++) num[i]=0;
	for (i=0;i<leg;i++)
	{
		num[temp[i]]++;
		num[cyclic[i]]--;
	}
	for (i=0;i<100;i++)
	{
		if (num[i]) {yes=1;break;}
	}
	if (yes) return 0;
	for (i=0;i<leg;i++)
	{
		if (strcmp(temp,cyclic)==0) break;
		move();
	}
	if (i==leg) return 0;
	else return 1;
}
void main ()
{
	int i;
	while (cin>>temp)
	{
		leg=strlen(temp);
		strcpy(str,temp);
		for (i=0;i<leg;i++) cyclic[leg-i-1]=temp[i];
		cyclic[leg]='\0';
		//cout<<"---------\n"<<cyclic<<"\n-------------"<<endl;
		flag=0;
		for (i=2;i<=leg;i++)
		{
			mul(i);
			if (flag) break;
			if (check()==0) break;
		}
		//cout<<"flag="<<flag<<"      leg="<<leg<<"       i="<<i<<endl;
		if (leg>=2&&i==leg+1&&flag==0) cout<<str<<" is cyclic"<<endl;
		else if (leg==1) cout<<str<<" is cyclic"<<endl;
		else cout<<str<<" is not cyclic"<<endl;
	}
}