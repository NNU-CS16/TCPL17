#include<stdio.h>
int main()
{
  int a,b,c;
  scanf("%d/%d",&a,&b);
  for(c=a;c>=1;c--)
  if(a%c==0&&b%c==0)
  break;
  printf("%d/%d",a/c,b/c);
  return 0;
}

