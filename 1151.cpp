#include <iostream.h>
#include <string.h>
#include <stdio.h>
void main ()
{
	int test,i,j,n,a,b,leg,c;
	char string[100];
	while (cin>>test)
	{
		for (i=0;i<test;i++)
		{	cout<<endl;
			cin>>n;
			for (j=0;j<n;j++)
			{
				gets(string);
				leg=strlen(string);b=0;c=0;
				for (a=0;a<leg;a++)
				{
					if (string[a]==' ') 
					{
						b=a;
						while (b>=c)
						{
							cout<<string[b-1];
							b--;
						}
						cout<<" ";c=a;b=a;
					}
					else if (a==leg-1)
					{
						c=a;
						while(c>=b)
						{
							cout<<string[c];
							c--;
						}
					}
				}
				cout<<endl;
			}
		}
	}
}
/*
#include<stdio.h> 
#include<string.h> 
int main() 
{ 
char a[100],temp; 
int i,j,num,k,l,t,m,n,count,u; 
scanf("%d",&count); 
for(l=0;l<count;l++){ 
scanf("%d\n",&num); 
for(i=0;i<num;i++){ 
gets(a); 
t=strlen(a); 
m=0; 
for(j=0;j<=t;j++){ 
if(a[j]== ' '||a[j]=='\x0'){ 
n=j-1; 
u=(m+n-1)/2; 
for(k=m;k<=u;k++) 
{temp=a[k];a[k]=a[n];a[n--]=temp;} 
m=j+1; 
} 
} 
puts(a); 
} 
if(l!=count-1) printf("\n"); 
} 
return 1; 
} 
*/