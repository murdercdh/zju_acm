#include <iostream.h>
#include <math.h>
void main ()
{
	float a,b,r1,r2,n;
	while (cin>>a>>b>>r1>>r2)
	{
		n=(r1+r2)*2;//Õý·½ÐÎ
		if (n>a||n>b) {cout<<"No"<<endl;continue;}
		else
		{
			n=(float)sqrt((r1+r2)*(r1+r2)-(r1-r2)*(r1-r2));
			if (n>a||n>b) {cout<<"No"<<endl;continue;}
		}
		cout<<"Yes"<<endl;
	}
}
/*
int main() 
{ 
    float a, b, c; 
    float r1, r2, r0; 

    while (cin >>a >>b >>r1 >>r2) 
    { 
        c  = a < b ? a : b; 
        r0 = r1 > r2 ? r1 : r2; 

        if (c < (2 * r0 + 0.01)) 
            cout <<"No" <<endl; 
        else 
            cout <<"Yes" <<endl; 
    } 
} 
*/