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
N��������YES 
N��ż�� THEN IF ����λ�ϵ���ż��λ��1������<=1 ��YES 
ELSE NO
//
//
��sumΪż��ʱ����λ�ϵ�����ֻ���Ƶ���λ��żλ�ϵ�����ֻ���Ƶ�żλ����sum_blackΪż��ʱ��ȫ�����в��ܴ���λ����żλ��ʼ����Ҫ����λ����sum_black DIV 2�����̣�żλ����sum_black DIV 2�����̣������С���sum_blackΪ����ʱ�����ȫ�����д���λ��ʼ����Ҫ����λ����(sum_black+1) DIV 2�����̣�żλ����sum_black DIV 2�����̣����ȫ�����д�żλ��ʼ����Ҫ����λ����sum_black DIV 2�����̣�żλ����(sum_black+1) DIV 2�����̣������С� 

��sumΪ����ʱ��ÿ�����Ӷ����Ե����Լ���Ҫȥ��λ�ã����Դ�ʱ�϶������Ƴ�ȫ�����С�
*/