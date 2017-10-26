#include<stdio.h>
int main()
{
    int N,r,b,n;
    
    printf("请输入该菱形递增的行数N(N<=13)：");
    scanf("%d",&N);
    
    for(r=1;r<=N;r++)                 //行循环
     {
      for(b=1;b<=14-r;b++)
        printf(" ");                  //一行中若干空格的输出
      for(n=1;n<=2*r-1;n++)
        printf("*");                 //一行中若干*的输出
      printf("\n");
     }
    
    for(r=N+1;r<=2*N-1;r++)
     {
      for(b=1;b<=14-2*N+r;b++)
        printf(" ");
      for(n=1;n<=4*N-2*r-1;n++)
        printf("*");
      printf("\n");
     }
     
    return 0;
}     
    
     
