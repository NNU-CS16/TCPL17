#include <stdio.h>
int main()
{
  int a,i;
  char c[16];
  float b;
  scanf("%d",&a);
  printf("八進制:%o  十六進制：%x",a,a);
 
  for(i=0;i<=15;i++)
  {
   b=a/2.0;
   a=a/2;
   if(b==(float)a)c[15-i]='0';
   else c[15-i]='1';
  }
   printf("二進制：%s\n",c);
}
