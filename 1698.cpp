#include <iostream.h>
#include <string.h>
void main ()
{
	char data[20];
	int i,len,vowel,a,b;
	while (cin>>data)
	{
		if (strcmp(data,"end")==0) break;
		vowel=0;a=0;b=0;
		len=strlen(data);
		for (i=0;i<len;i++)
		{
			if (data[i]=='a'||data[i]=='e'||data[i]=='i'||data[i]=='o'||data[i]=='u') 
			{
				vowel++;a++;b=0;
				if (a==3) break;
			}
			else 
			{
				a=0;b++;
				if (b==3) {a=3;break;}
			}
			if (data[i]==data[i+1]&&data[i]!='e'&&data[i]!='o'&&i<len-1) {a=3;break;}
		}
		if (a==3||vowel==0) cout<<"<"<<data<<"> is not acceptable."<<endl;
		else if (vowel!=0) cout<<"<"<<data<<"> is acceptable."<<endl;
	}
}