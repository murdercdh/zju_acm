#include<stdlib.h> 
#include <stdio.h> 
#include<string.h> 
const int maxn=1000100,max=1000001; 
int i,j,k; 
short a[maxn]; 
int main() 
{ 
   memset(a,0,sizeof(a)); 
   for (i=1;i<100;i++){ 
      j=i/10; 
      k=i+i%10; 
      while(j){ 
         k+=j%10; 
         j/=10;} 
       a[k]=1; 
      if (a[i]==0) printf("%d\n",i); 
   } 
return 0; 
}  