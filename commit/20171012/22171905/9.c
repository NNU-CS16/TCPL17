#include <stdio.h>
int main()
{
   float a,b;
   int c;
   char d;
   scanf("%f%d %c%f",&a,&c,&d,&b);
   printf("%c %d %.2f %.2f\n",d,c,a,b);
   return 0;
}
