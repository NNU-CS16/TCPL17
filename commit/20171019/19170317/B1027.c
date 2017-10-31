#include<stdio.h>
int main()
{
    int N;
    char c;
    printf("请给出一个正整数N(<=1000)和一个符号:");
    scanf("%d %c",&N,&c);
    if(N<7)
      printf("%d\n",N);
    else
    {
      int n=2,i,m,j;
      while(2*n*n-1<=N)
        ++n;
      n-=1;
        for(i=n;i!=0;--i)
        {
          for(m=1;m<=n-i;++m)
            printf(" ");
          for(j=1;j<=2*i-1;++j)
            printf("%c",c);
          printf("\n");
        }
        for(i=2;i<=n;++i)
        {
          for(m=1;m<=n-i;++m)
            printf(" ");
          for(j=1;j<=2*i-1;++j)
            printf("%c",c);
          printf("\n");
        }
      int k=N-(2*n*n-1);
      if(k!=0)
        printf("%d\n",k);
    }
    return 0;
}
