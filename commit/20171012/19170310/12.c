#include <stdio.h>
#include <math.h>
int main()
{    
int m,n,a,x,y;
int max,a;
printf("enter a fraction :(a/b)");
scanf("%d/%d",&m,&n);
x = m;
y = n;
if (m < n)
     {
          a = m;
          m = n;
          n = a;
     }
     if (n == 0)
          max = m;
     else
     {
     while(1)
          {
          a = m % n;
          m = n;
          n = a;
          max = m;
          if(n == 0)
                     break;
          }
      }
      x /= max;
      y /= max;
      printf("In lowest terms :%d/%d",x,y);
  getch();
  return 0;
}








