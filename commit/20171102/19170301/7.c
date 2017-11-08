#include<stdio.h>
#include <string.h>
int GCD_iterative(int m, int n)
{
int l;
if(m < n)
{
  l = m;
  m = n;
  n = l;
}
 while(n != 0)
{
  l = m % n;
  m = n;
  n = l;
}
return m;
}
int GCD_recursive(int m, int n)
{
int l;
if(m < n)
{
  l = m;
  m = n;
  n = l;
}
 if(m%n!=0)
{
  m %= n;
  return GCD_recursive(m, n);
}
 else
{  return n;}
}
int main()
{
  int m, n;
  char str[5];
  char d[1][5]={"rec"};
  scanf("%d %d",&m,&n);
  printf("iter or rec\n");  
  scanf("%s",str);
  if(d[1][1]==str[1])
{  GCD_recursive(m, n);
   printf("%d\n",GCD_recursive(m, n));
}
 else
 { GCD_iterative(m, n);
   printf("%d\n",GCD_iterative(m, n));
}
  return 0;
}
