#include <iostream.h> 
int gcd(int a,int b)    
{ 
   if(a%b==0) 
      return b; 
   else 
      return gcd(b,a%b);
}
void main ()
{
	int a,b,res,x,y,n,t,p,q;
	while (cin>>x>>y)
	{
		if (y%x) {cout<<"0"<<endl;continue;}
		if (x==y) {cout<<"1"<<endl;continue;}
		n=0;
		for (a=x;a<=y;a+=x)
		{
			if (y%a) continue;
			p=a;
			q=x*y/p;b=q;
			if (p>q) break;//cout<<"("<<p<<","<<q<<")=";
			res=gcd(p,q);
			//cout<<res<<endl;
			if (res==x&&a*b/x==y) n++;
		}
		cout<<n*2<<endl;
	}
}
/*
#include <stdio.h> 

int gcd(int a,int b)    
{ 
   if(a%b==0) 
      return b; 
   else 
      return gcd(b,a%b); 
} 

int main( void ){ 
    
   int x0,y0,i,count,j; 
    
   while( scanf( "%d%d",&x0,&y0 )!=EOF ){ 
       
      count = 0; 
      if( (y0%x0) ) 
         printf( "0\n" ); 

      else if( x0==y0 ) 
         printf( "1\n" ); 

      else{ 
         for( i=x0;i<=y0;i+=x0 ){ 

            if( (x0%i) && (y0%i) )    
               continue; 

            j = (y0/i)*x0;    
            if( j<i )          
               break; 
            if( gcd( j,i )==x0 )    
               count++;            
         } 
          
         printf( "%d\n",count*2 ); 
      } 
   } 
   return 0; 
} 
*/