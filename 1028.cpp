#include <iostream.h>
#include <math.h>
void main ()
{
	int n,test;
	int a[35];
	int i,temp1,temp2;
	bool flag;
	cin>>test;
	while (test)
	{
		test--;
		cin>>n;
		for (i=0;i<n;i++) cin>>a[i];
		if (n%2) { flag=1;goto end;}
		else
		{
			temp1=0;temp2=0;
			for (i=0;i<n;i++)
			{
				if (a[i]==1&&i%2) temp1++;
				else if (a[i]==1&&i%2==0) temp2++;
			}
			if (abs(temp1-temp2)<=1) flag=1;
			else flag=0;
		}
end:
		if (flag) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
/*
N是奇数就YES 
N是偶数 THEN IF 奇数位上的与偶数位的1个数差<=1 就YES 
ELSE NO
//
//
当sum为偶数时，奇位上的盘子只能移到奇位，偶位上的盘子只能移到偶位。当sum_black为偶数时，全黑序列不管从奇位还是偶位开始，都要求奇位上有sum_black DIV 2个黑盘，偶位上有sum_black DIV 2个黑盘，否则不行。当sum_black为奇数时，如果全黑序列从奇位开始，则要求奇位上有(sum_black+1) DIV 2个黑盘，偶位上有sum_black DIV 2个黑盘；如果全黑序列从偶位开始，则要求奇位上有sum_black DIV 2个黑盘，偶位上有(sum_black+1) DIV 2个黑盘，否则不行。 

当sum为奇数时，每个盘子都可以到达自己想要去的位置，所以此时肯定可以移出全黑序列。
*/