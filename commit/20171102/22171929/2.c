#include <stdio.h>
void print_hex(int a);
int main()
{
   int x;
   scanf("%d",&x);
   print_hex(x);
   return 0;

}
void print_hex(int a)
{
    int b,c,d;
    b=a%16;
    d=a/16;
    c=d%16;
    printf("%d%d",c,b);
   
}
