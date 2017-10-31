#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,n;
    int flag=0;
    printf("请输入正整数n的值：");
    scanf("%d",&n);
   
    for(x=1;x<=n/2;x++)
    {   
      for (y=x;y<=n/2;y++)
      if(x*x+y*y==n)
       {
         flag=1;
         printf("%d\t%d\n",x,y);
       }

     }
    if(flag==0)
     printf("NO SOLUTION");

     printf("\n");
     return 0;
}
   
