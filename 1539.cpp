#include <iostream.h>
int fun(int n)
{
	if(n==1||n==2||n==4) return 0;
	if (n==3) return 1;
	else return (fun(n/2)+fun(n-n/2));
};
void main ()
{
	int n,res;
	while (cin>>n)
	{
		res=fun(n);
		cout<<res<<endl;
	}
}
