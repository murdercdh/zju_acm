//ɸѡ����ĳ��Χ���ڵ����� ��°ͺղ���. 
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
   for(i=2;i<=N;i++)//ɸѡ���Ĺؼ���Ҫ�ҵ�����,�������žͿ�����. 
  {
   if(flag[i])
    {j=2*i;
    while(j<=MAX)
      {flag[j]=0;
      j+=i;//�����ı���ȫ��ɸ��,����־λ��0. 
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
         if(flag[k]&&flag[n-k])//��λȫ��Ϊ�� ,˵������������֮��ΪN. 
         {
            printf("%d = %d + %d\n",n,k,n-k);
                break;
         }
      }
    }
   return 1;
} 
