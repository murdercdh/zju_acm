#include<iostream.h> 
int n,a,i; 
int main(){ 
while(cin>>n){ 
a=0;i=0; 
while(1) 
{ 
i++; 
a=(1+a*10)%n;//cout<<a<<endl;
if(a==0) break; 
} 
cout<<i<<endl; 
} 
}