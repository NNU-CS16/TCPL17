#include <stdio.h>
void triangle_judge(int a,int b,int c);

int main()
{
  int a,b,c;
  scanf("%d%d%d",&a,&b,&c);
  triangle_judge(a,b,c);
  return 0;
}
  void triangle_judge(int a,int b,int c)
{
  if(a+b <= c || a+c <= b || b+c <= a)
  printf("no");
  else if(a == b && b == c)
  printf("deng bian");
  else if((a == b && a != c)||(a == c && a != b)||(b == c && b != a))
  printf("deng yao");
  else if(a != b && a != c && b != c)
  printf("pu tong");
}
