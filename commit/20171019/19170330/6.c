#include<stdio.h>
int main()
{
int a,b,c;
printf("Input a b c=");
scanf("%d%d%d",&a,&b,&c);
  if (a==b)
  {
    printf("C\n");
  }
  else if (b==c)
  {
    printf("A\n");
  }
  else
  {
    printf("B\n");
  }
return 0;
}
