#include <stdio.h>
void i(int *a,int *b) 
{ 
 int n; 
 for (n = (*a <= *b) ? *a : *b; n >= 1;n--) 
 { 
 if(*a % n== 0 && *b%n==0)
{
break;
}}
*a/=n;
*b/=n;
}
int main()
{
  int a,b;
  scanf("%d/%d\n",&a,&b);
  i(&a,&b);
printf("%d/%d",a,b);
  return 0;
}
