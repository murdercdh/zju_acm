#include <stdio.h>
int main()
{
    int a[9],i,temp,count;
    while(scanf("%d",a+8)!=EOF){
         temp=0;
        for(i=7;i>=0;i--)  scanf("%d",a+i);
       
        for(i=8;i>=0;i--){        
                if(a[i]!=0){
                    temp++;
                    count=i;
                    if(i>1){
                    if(a[i]>1) printf("%dx^%d",a[i],i);
                    else if(a[i]==1) printf("x^%d",i);
                    else if(a[i]==-1) printf("-x^%d",i);
                    else if(a[i]<-1) printf("%dx^%d",a[i],i);
                    break;
                }              
                else if(i==1){
                    if(a[i]==1) printf("x");
                        else if(a[i]==-1) printf("-x");
                        else if(a[i]>1) printf("%dx",a[i]);
                        else if(a[i]<-1){
                              a[i]=-a[i];
                              printf("-%dx",a[i]);
                              break;
                          }    
                      }    
                 else if(i==0){
                     if(a[i]==1) printf("1\n");
                        else if(a[i]==-1) printf("-1\n");
                        else if(a[i]>1) printf("%d\n",a[i]);
                        else if(a[i]<-1){
                            a[i]=-a[i];
                              printf("-%d\n",a[i]);
                          }    
                      }    
                              
              }            
                                        
            }     
         
            
        for(i=count-1;i>1;i--){
            if(a[i]!=0){
                   temp++;
                   if(a[i]>1) printf(" + %dx^%d",a[i],i);
                   else if(a[i]==1) printf(" + x^%d",i);
                   else if(a[i]==-1) printf(" - x^%d",i);
                   else if(a[i]<-1){
                       a[i]=-a[i];
                        printf(" - %dx^%d",a[i],i);  
                    }
                }    
            }    
            
            
            if((a[1]!=0)&&count!=1){
                temp++;
                if(a[1]>1) printf(" + %dx",a[1]);
                else if(a[1]==1) printf(" + x");
                else if(a[1]==-1) printf(" - x");
                else if(a[1]<-1){
                    a[1]=-a[1];
                      printf(" - %dx",a[1]);
                  }
              }        
            
                        
                       
                  if(temp==0) printf("0\n");
                    else if(count!=0){
                    if(a[0]==0)  printf("\n");
                    else{
                        if(a[0]==1) printf(" + 1\n");
                        else if(a[0]==-1) printf(" - 1\n");
                        else if(a[0]>1) printf(" + %d\n",a[0]);
                        else if(a[0]<-1){
                            a[0]=-a[0];
                              printf(" - %d\n",a[0]);
                          }
                      }
                  }    
                  }
                  return 1;
              }                
                               
        
    
