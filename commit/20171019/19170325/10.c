#include<stdio.h>
#include<math.h>

int main()
{

  int a,b,c,d;

  printf("please input a,b,c\n");

  scanf("%d%d%d",&a,&b,&c);

  d=(int)pow(a,b)%c;

  printf("pow(a,b)modc=%d\n",d);

  return 0;
}
