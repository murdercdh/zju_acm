#include<stdio.h> 
void main() 
{ 
   int N;
   while(scanf("%d",&N)!=EOF) 
   { 
      if(N==0) 
      { 
         printf ("1\n"); 
         continue; 
      } 
      printf("%d\n",1+(3*N+1)*3*N/2-5*N); 
   } 
}
//���ƹ�ʽ1+(3*N+1)*3*N/2-5*N