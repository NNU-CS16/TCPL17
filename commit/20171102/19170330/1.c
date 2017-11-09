#include <stdio.h>
void triangle_judge (int a, int b, int c)
{
      scanf ("%d%d%d", &a, &b, &c);
      if (a + b > c||b + c > a||a + c > b)
      {
         if (a==b||b==c||c==a)
           {
             if (a==b && b==c)
               printf ("等边三角形");
             else
               printf ("等腰三角形");
           }
         else printf ("普通三角形");
      }
      else printf ("非三角形");
}

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    triangle_judge(a, b, c);
    return 0;
}

    

