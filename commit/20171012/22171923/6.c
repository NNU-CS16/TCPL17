#include<stdio.h>
int main()
{
  int N,a,b,c;
  printf("please input the number N:");
  scanf("%d",&N);
  for(a=1;a<=N;a++)
  {
    for(b=1;b<=N-a;b++)
    printf(" ");
    for(c=1;c<=2*a-1;c++)
    printf("*");
    printf("\n");
  }
  for(a=1;a<=N;a++)
  {
    for(b=0;b<=a-1;b++)
    printf(" ");
    for(c=0;c<=2*N-2*a-2;c++)
    printf("*");
    printf("\n");
  }
  return 0;
}

