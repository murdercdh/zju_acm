#include <iostream.h>
int main ()
{
    int n,m,i=1;
    while (cin>>n>>m&&n&&m)
    {
        cout<<"Hole #"<<i++<<endl;
        if (m==1) {cout<<"Hole-in-one."<<endl<<endl;continue;}
        if (n>=m+3) {cout<<"Double Eagle."<<endl<<endl;continue;}
        if (n==m+2) {cout<<"Eagle."<<endl<<endl;continue;}
        if (n==m+1) {cout<<"Birdie."<<endl<<endl;continue;}
        if (m==n) {cout<<"Par."<<endl<<endl;continue;}
        if (n+1==m) {cout<<"Bogey."<<endl<<endl;continue;}
        if (n+2<=m){cout<<"Double Bogey."<<endl<<endl;continue;}
    }
}        
