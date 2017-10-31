#include<stdio.h>
int main()
{
    int a1,a2,b1,b2,a3=0,b3=0,c,d,m=1,n=1;
    scanf("%d%d%d%d",&a1,&a2,&b1,&b2);
    for(;a1>0;)
      {
        c=a1%10;
        a1=a1/10;
        if(c==a2)
       	{
          a3=c*m+a3;
          m*= 10;
        }
      }
   
    for(;b1>0;)
     {
       d=b1%10;
       b1=b1/10;
       if(d==b2)
       {
         b3=d*n+b3;
         n*=10;
       }
     } 
   printf("%d\n",a3+b3);
    
     return 0;
}
