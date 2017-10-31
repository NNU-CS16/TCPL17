#include<stdio.h>
int main()
{
    int N,M,i,a[N];
    printf("请输入N(1<=N<=100),M(M>=0),N个整数:");
    scanf("%d%d\n",&N,&M);
    for(i=0;i<N;++i)
      scanf("%d",&a[i]);
    for(i=N-M;i<N;++i)
      printf("%d ",a[i]);
    for(i=0;i<N-M-1;++i)
      printf("%d ",a[i]);
    printf("%d",a[N-M-1]);
    return 0;
}
