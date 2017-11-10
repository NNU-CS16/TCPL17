#include<stdio.h>
void print_hex(int a);

int main()
{
  int a;
  scanf("%d", &a);
  print_hex(a);
  return 0;
}
  void print_hex(int a)
 {
  int b,c;
  b=a % 16;
  c=(a/16) % 16;
  printf("%d", c*10+b);
 }

