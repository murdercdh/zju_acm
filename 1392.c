#include<stdio.h>
#include<string.h>
void output(char ch[])
 {
     int i=0;
  while(ch[i]!='\0')
  {
     if(ch[i]>='A'&&ch[i]<='E'){
       ch[i]+=26;
       printf("%c",ch[i]-5);
     }
     else if(ch[i]>'E'&&ch[i]<='Z')
         printf("%c",ch[i]-5);
     else
         printf("%c",ch[i]);
     i++;
    }
  }

int main()
{
    int j,p,q;
    char ch[202],ch1[10],ch2[5];
  for(j=1;;j++)
  {
    gets(ch1);
    p=strcmp(ch1,"ENDOFINPUT");
     if(p==0)  break;
    gets(ch);
    gets(ch2);
    q=strcmp(ch2,"END");
     if(q==0){
       output(ch);
       printf("\n");
     }
   }
   while(1);
   return 1;  
}
