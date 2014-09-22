#include <iostream.h>
#include <string.h>
#include <algorithm>
using namespace std;
void main ()
{
	char keyword[10],temp_keyword[10],temp_char,ciphertext[100];
	int order[10],i,j;
	while (cin>>keyword)
	{
		if (strcmp(keyword,"THEEND")==0) break;
		int keyword_len,ciphertext_len,every_sect;
		keyword_len=strlen(keyword);
		strcpy(temp_keyword,keyword);
		for (i=0;i<keyword_len-1;i++)
		{
			for (j=i+1;j<keyword_len;j++)
			{
				if (temp_keyword[i]>temp_keyword[j])
				{
					temp_char=temp_keyword[i];
					temp_keyword[i]=temp_keyword[j];
					temp_keyword[j]=temp_char;
				}
			}
		}
		/*
		for (i=0;i<keyword_len;i++)
		{
			for (j=0;j<keyword_len;j++)
			{
				if (temp_keyword[i]==keyword[j])
				{
					order[i]=j+1;
					keyword[j]='+';
					break;
				}
			}
			cout<<order[i]<<" ";
		}
		*/
		for (i=0;i<keyword_len;i++)
		{
			for (j=0;j<keyword_len;j++)
			{
				if (temp_keyword[j]==keyword[i])
				{
					order[i]=j+1;
					temp_keyword[j]='+';
					break;
				}
			}
			//cout<<order[i]<<" ";
		}
		cin>>ciphertext;
		ciphertext_len=strlen(ciphertext);
		every_sect=ciphertext_len/keyword_len;
		for (j=0;j<every_sect;j++)
		{
			for (i=0;i<keyword_len;i++)
			{
				cout<<ciphertext[j+(order[i]-1)*every_sect];
			}
		}
		cout<<endl;
	}
}