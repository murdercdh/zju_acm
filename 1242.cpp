#include <iostream.h> 
#include <math.h> 
void main()
{ 
   double w,d; 
   int count=1,year,temp; 
   while(cin>>w>>d)
   { 
      if (w==0&&d==0) break;
	  year=(int)(log10(810*w/d)/log10(2)*5730); 
      if(year<10000)
	  { 
         temp=year; 
         year=year/100*100; 
         if(temp%100>=50) year+=100; 
      } 
      else
	  { 
         temp=year; 
         year=year/1000*1000; 
         if(temp%1000>=500) year+=1000; 
      } 
      cout<<"Sample #"<<count++<<endl; 
      cout<<"The approximate age is "<<year<<" years."<<endl<<endl; 
   } 
} 
