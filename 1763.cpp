#include <stdio.h>
void main ()
{
	float a,b,temp;
	scanf("%f",&temp);
	a=temp;
	while (scanf("%f",&b)!=EOF)
	{
		if (b==999) {printf ("End of Output\n");break;}
		temp=b-a;
		/*
		if (temp<1&&temp>-1)
		{
			printf (".");
			while (temp)
			{
				temp*=10;
				printf ("%d",(int)temp);
				temp/=10;
			}
		}
		else
		{
			printf ("%.2f\n",temp);
		}
		*/
		printf ("%.2f\n",temp);
		a=b;
	}
}

