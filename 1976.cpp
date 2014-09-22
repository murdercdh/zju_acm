//C(n,m+n)
#include <iostream.h> 
#include <iomanip.h> 
int main() 
{ 
   unsigned long i, m, n, t; 
   double res; 
   while(cin>>m>>n) 
   { 
      if(m==0 && n==0) break; 
      res=1; 
      if(m>n) {t=m;m=n;n=t;} 
      for(i=m; i>=1; i--) 
      { 
         res=res*(n+i)/i; 
      } 
      cout<<setiosflags(ios::fixed)<<setprecision(0)<<res<<endl; 
   } 
   return 1; 
}