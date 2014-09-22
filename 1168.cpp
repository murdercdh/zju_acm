#include <iostream.h> 
/*#include <string.h>*/ 
#define MAX 21 
long g[MAX][MAX][MAX]; 

int main() 
{ 
   int a, b, c,i,j,k; 
/*   memset(g,0,sizeof(g));*/ 
   for(i = 0; i < MAX; i++) 
   { 
      for(j = 0; j < MAX; j++) 
         g[i][j][0] = g[i][0][j] = g[0][i][j] = 1; 
   } 
   for(i = 1; i < MAX; i++) 
      for(j = 1; j < MAX; j++) 
         for(k = 1; k < MAX; k++) 
         { 
            if(i<j&&j<k) 
               g[i][j][k] = g[i][j][k-1] + g[i][j-1][k-1] - g[i][j-1][k]; 
            else 
               g[i][j][k] = g[i-1][j][k] + g[i-1][j-1][k] + g[i-1][j][k-1] - g[i-1][j-1][k-1]; 
         } 
   while (cin>>a>>b>>c) 
   { 
      if(a==-1&&b==-1&&c==-1) 
         break; 
      cout<<"w("<<a<<", "<<b<<", "<<c<<") = "; 
      if(a <= 0 || b <= 0 || c <= 0) 
         cout << "1" << endl; 
      else if(a > 20 || b > 20 || c > 20) 
         cout << g[20][20][20] << endl; 
      else 
         cout << g[a][b][c] << endl; 
   } 
   return 0; 
}