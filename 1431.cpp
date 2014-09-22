#include <iostream.h>
#include <string.h>
#include <algorithm>
using namespace std;
void main ()
{
	char name[100][21],temp[10];
	int day[100],weight[100],i,j,k,abc[100];
	cin>>temp;
		if (strcmp(temp,"START")==0)
		{
			i=0;
			while (1)
			{
				cin>>name[i];
				if (strcmp(name[i],"END")==0) break;
				cin>>day[i]>>weight[i];
				weight[i]-=day[i];
				abc[i]=weight[i];
				i++;
			}
			sort(abc,abc+i);
			for (j=i-1;j>=0;j--)
			{
				for (k=0;k<i;k++)
				{
					if (abc[j]==weight[k]&&weight[k]!=-1)
					{
						cout<<name[k]<<endl;
						weight[k]=-1;
						break;
					}
				}
			}
		}
	while (cin>>temp)
	{
		cout<<endl;
		if (strcmp(temp,"START")==0)
		{
			i=0;
			while (1)
			{
				cin>>name[i];
				if (strcmp(name[i],"END")==0) break;
				cin>>day[i]>>weight[i];
				weight[i]-=day[i];
				abc[i]=weight[i];
				i++;
			}
			sort(abc,abc+i);
			for (j=i-1;j>=0;j--)
			{
				for (k=0;k<i;k++)
				{
					if (abc[j]==weight[k]&&weight[k]!=-1)
					{
						cout<<name[k]<<endl;
						weight[k]=-1;
						break;
					}
				}
			}
		}
	}
}