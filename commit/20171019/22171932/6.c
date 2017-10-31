#include<stdio.h>
int main()
{
  int a,b,c;
  printf("请输入A、B、C三个小球的重量：");
  scanf("%d%d%d",&a,&b,&c);
  if(a==b)
    printf("C");
    else if(a==c)
          printf("B");
          else printf("A");
  printf("\n");
  return 0;
}
