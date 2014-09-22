#include <iostream.h>
#include <string.h>
void main ()
{
	int north,east,west,south,up,down,n,x,i;
	char temp[10];
	while (cin>>n&&n)
	{
		north=2;east=4;west=3;south=5;up=1;down=6;
		for (i=0;i<n;i++)
		{
			cin>>temp;
			if (strcmp(temp,"north")==0)
			{
				x=up;up=south;south=down;down=north;north=x;
			}
			else if (strcmp(temp,"south")==0)
			{
				x=up;up=north;north=down;down=south;south=x;
			}
			else if (strcmp(temp,"west")==0)
			{
				x=up;up=east;east=down;down=west;west=x;
			}
			else if (strcmp(temp,"east")==0)
			{
				x=up;up=west;west=down;down=east;east=x;
			}
		}
		cout<<up<<endl;
	}
}