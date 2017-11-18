#include<stdio.h>
#include<math.h>
int prime(int n)
{
    int i;
    for(i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
          
           
            return 0;
        }   
         return 1;
         
}
int main()
{
    int i=3,M,N;
    int t=2,cnt=1;
    scanf("%d %d",&M,&N);
    if(M==1)
    {
    if(N>=2) 
        {
        printf("2 ");
        cnt++;
        }
    else
        { 
        printf("2");
        cnt++;
        }
     }
while(t<=N)
{
    if(prime(i))
    {      
       if(t>=M)
          {
           
        if(cnt%10==0)
             
             printf("%d\n",i);
             
         else if(t==N)
              
             printf("%d",i);
             
         else
            printf("%d ",i);
        cnt++;
        }            
      t++;
 }
i++;
}

return 0;
}   
