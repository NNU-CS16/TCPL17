#include <stdio.h>

int main()
{
    int i,j,k,N;                 //i为行数，j为空格数，k为“*”数
    printf("请输入正整数N:");
    scanf("%d",&N);
    
    for(i=1;i<=N;i++)            //N行之前
    {
        for(j=1;j<=N-i;j++)
           printf(" ");
        for(k=1;k<=2*i-1;k++)
           printf("*");
        printf("\n");
    }

    for(i=N+1;i<=2*N-1;i++)      //N行之后
    {
       for(j=1;j<=i-N;j++)
          printf(" ");
       for(k=1;k<=4*N-2*i-1;k++)
          printf("*");
       printf("\n");
    }

     return 0;
}
