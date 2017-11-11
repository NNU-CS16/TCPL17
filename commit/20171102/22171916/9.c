#include<stdio.h>
int is_int_pal(int n);
int main()
{
int n;
scanf("%d\n",&n);
printf("%d\n",is_int_pal(n));
return 0;
}
int is_int_pal(int n)
{
 int m,x,y;
 m=n;
 while(n)
  {
     x=n%10;
     n=n/10;
     y=y*10+x;
  }
 if (y==m)
   return 0;
 else 
   return -1;
}

