#include<stdio.h>
int main()
{
  int a,b,c;
  scanf("%d %d %d",&a,&b,&c);
  if(a==b)
    printf("c");
  if(a==c)
    printf("b");
  if(b==c)
    printf("a");
  return 0;
  
}
