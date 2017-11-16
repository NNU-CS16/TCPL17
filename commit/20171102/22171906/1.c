#include <stdio.h>
void triangle_judge(int a, int b, int c)
{
 scanf ("%d %d %d",&a,&b,&c);
 if (a+b>c || b+c>a || a+c>b)
   {
    if (a==b || a==c || b==c)
      {
       if (a==b && b==c)
       printf ("equilateral triangle");
       else 
       printf ("isosceles triangle");
      }
    else printf ("regular triangle");
   }
  else printf ("non triangle");
}
int main ()
{
 int a,b,c;
 scanf("%d %d %d",&a,&b,&c);
 triangle_judge(a,b,c);
 return 0;
}     
