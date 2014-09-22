#include <iostream.h>
int main ()
{
	int x,y,xmax,xmin,ymax,ymin;
	bool end=false;
	xmax=ymax=0;ymin=xmin=738197504;
	while (1)
	{
		cin>>x>>y;
		if (x==0&&y==0)
		{
			if (end==true) return 0;
			else
			{
				cout<<xmin<<" "<<ymin<<" "<<xmax<<" "<<ymax<<endl;
				xmax=ymax=0;ymin=xmin=738197504;
				end=true;
				continue;
			}
		}
		end=false;
		if (xmax<x) xmax=x;
		if (xmin>x) xmin=x;
		if (ymax<y) ymax=y;
		if (ymin>y) ymin=y;
	}
	return 0;
}
/*
#include <iostream> 
#include <fstream> 
#define do_nothing 1 
using namespace std; 

int main() 
{ 
   long x,y; 
    long xmax,xmin,ymax,ymin; 
   bool over= false; 
    
      xmax=ymax=0; 
      ymin=xmin=738197504; 
      over= false; 
      while(1) 
      { 
         cin>>x>>y; 
         if(x==0 && y==0) 
         { 
            if(over == true) 
               return 0; 
            else 
            { 
               over = true; 
               cout<<xmin<<" "<<ymin<<" "<<xmax<<" "<<ymax<<endl; 
               xmax=ymax=0; 
                  ymin=xmin=738197504; 
               continue; 
            } 
         } 
          
         over= false; 
         x>xmax ? xmax=x : do_nothing; 
          x<xmin ? xmin=x : do_nothing; 

          y>ymax ? ymax=y : do_nothing; 
          y<ymin ? ymin=y : do_nothing; 
      } 

    
   return 0; 
}
*/