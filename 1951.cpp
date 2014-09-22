//筛选法求某范围以内的素数 哥德巴赫猜想. 
#include<stdio.h>
#include<math.h>
#include<string.h>
#define MAX 1000000
int flag[MAX];
void Initiate()
 {
   int i,j;
   int N;
   N=(int)sqrt(MAX);
   for(i=2;i<MAX;i++)
    flag[i]=1;
   flag[0]=0;
   flag[1]=0;
   for(i=2;i<=N;i++)//筛选法的关键是要找到上限,即开根号就可以了. 
  {
   if(flag[i])
    {j=2*i;
    while(j<=MAX)
      {flag[j]=0;
      j+=i;//素数的倍数全部筛出,并标志位赋0. 
      }
     }
  }
}
int main()
{ int k,n;
   Initiate();
   while(scanf("%d",&n)!=EOF&&n)
   { 
      for(k=2;k<n;k++)
      {
         if(flag[k]&&flag[n-k])//两位全不为零 ,说明存在两素数之和为N. 
         {
            printf("%d = %d + %d\n",n,k,n-k);
                break;
         }
      }
    }
   return 1;
} 
