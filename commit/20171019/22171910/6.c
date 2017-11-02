/*题目：找小球*/
#include<stdio.h>
int main()
{
  int a,b,c;
  scanf("%d%d%d",&a,&b,&c);
  if(a==b) printf("C\n");       //若A、B质量相同，输出C
  else
  {
    if(a==c) printf("B\n");    //若A、C质量相同，输出B
    else printf("A\n");        //否则输出A
  }
  return 0;
}
