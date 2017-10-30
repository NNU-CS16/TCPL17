#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,n,a,b;
    printf("请输入正整数n:");
    scanf("%d",&n);
    a=sqrt(n/2);
    b=0;
    for(x=0;x<=a;x++)
       {
       y=sqrt(n-x*x);
       if(y*y+x*x==n)
         {
         printf("%d %d\n",x,y);
         b=1;
         }
       }
    if(b==0)
      printf("No Solution\n");
    return 0;
}
