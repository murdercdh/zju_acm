#include <stdio.h>
#include <iostream.h>
#include <string.h>
#define size 100005
void main ()
{
	int a[size],n,i,l[size],j;
	double max,temp;
	//cout<<"ok"<<endl;
	while (EOF!=scanf("%d",&n)&&n)
	{
		//for (i=0;i<n;i++) {scanf("%d",&a[i]);l[i]=0;}
		//cout<<"ok"<<endl;
		memset(l,0,sizeof(l));
		for (i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			l[i]=i;
			while (a[i]<=a[l[i]-1]&&l[i]>0) l[i]=l[l[i]-1];
		}
		//cout<<"  ";
		//for (i=0;i<n;i++) cout<<l[i]<<" ";
		//cout<<endl;
		max=0;
		//printf ("  ");
		//cout<<"  ";
		for(i=n-1;i>=0;i--)
		{
            j=i;
            while(j<n-1&&a[j+1]>=a[i]) j=l[j+1];
			//printf ("%d ",j);
			//cout<<j<<" ";
			temp=(j-l[i]+1)*(double)a[i];
            if(max<temp) max=temp;
            l[i]=j;
		}
		//cout<<endl;
		printf ("%.0lf\n",max);
	}
}
