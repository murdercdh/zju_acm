#include<stdio.h>
#include<string.h>
void main()
{
    long int digsum,sum;
    int i,k,n,l;
    char array[32];
    scanf("%d",&k);
    for(;k>0;k--)
    {
        while(1)
        {
            scanf("%d",&n);
            if(n==0)
            break;
            scanf("%s",array);
            l=strlen(array);
            digsum=0;
            sum=0;
            for(i=0;i<l;i++)
            {
                sum=sum*n+(array[i]-48);//��Ϊ10���ƺ�10���Ƶĸ�λ��������
                digsum+=(array[i]-48);
            }
			printf ("%d   %d\n",sum,digsum);
            if(sum%digsum==0)
            printf("yes\n");
            else
            printf("no\n");
        }
        if(k!=1)
        printf("\n");
    }
}