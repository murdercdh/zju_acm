#include <iostream.h>
#include <string.h>
void main ()
{
	char bitmap[32][33],path;
	int i,j,test,x,y,n=1;
	cin>>test;
	while (test)
	{
		test--;
		memset(bitmap,'.',sizeof(bitmap));
		cin>>x>>y;
		while (cin>>path)
		{
			if (path=='.') break;
			switch(path)
			{
			case 'E':{if (y-1>=0) bitmap[y-1][x]='X'; x++; break;}
			case 'W':{x--;if (x>=0) bitmap[y][x]='X'; break;}
			case 'N':{bitmap[y][x]='X'; y++; break;}
			case 'S':{y--;if (y>=0,x-1>=0) bitmap[y][x-1]='X'; break;}
			}
		}
		cout<<"Bitmap #"<<n<<endl;n++;
		for (i=31;i>=0;i--)
		{
			for (j=0;j<32;j++)
			{
				cout<<bitmap[i][j];
			}
			cout<<endl;
		}
		cout<<endl;
	}
}
//�����룬�����е����һ�ſ��ɵ�һ�ţ���������N,Sʱ������Ҫ��������
//����ʱ��N��y--,S��y++,��������������N��y++,S��y--
//��������ʱ���ߣ���ÿ������Ĳ�������Ҳ����ȷ��������E�ǲ�������ģ�W�ǲ�������ģ�N�ǲ�������ģ�S�ǲ��������
//���ڵ�����겻�Ǻ͸��ӵ������ϸ�һһ��Ӧ�ģ����Ҫ��һЩ�任��
//E���ȱ䣬�ٱ����꣨���ᣩ��������������Ǳ�����һ����������Ϊ��bitmap[y+1][x],�������Ƿ������ģ���˱�bitmap[y-1][x]
//W���ȱ����꣬�ٱ�
//N���ȱ䣬�ٱ�����
//S���ȱ����꣬�ٱ�
