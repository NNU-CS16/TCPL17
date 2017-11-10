#include <stdio.h>
void print_hex(int a);
int main(void)
{
   int n;

   printf("please input number:\n");
   scanf("%d", &n);
   print_hex(n);
   printf("\n");

   return 0;
}

void print_hex(int a)
{
   if (a>0)
   {
     print_hex(a/16);
     switch (a%16)
     {
      case 10:printf("A");break;
      case 11:printf("B");break;
      case 12:printf("c");break;
      case 13:printf("D");break;
      case 14:printf("E");break;
      case 15:printf("F");break;
      default:printf("%c", a%16+48);break;
     }
   }
}
