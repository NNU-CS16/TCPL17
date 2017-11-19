#include <stdio.h>
int abc(int n, int c);
int main()
{
   int n, c; 
   c = 0;
   printf("请输入正整数N:\n");
   scanf("%d",&n);
   c = abc(n, c);
   if(c == 0)
     c++;
   printf("走法数目为：%d\n",c);
   return 0;
}
int abc(int n, int c)
{
    if(n == 1)
    {
      c++;
      c = c % 100007;
    }
    else if(n == 2)
         {
            c = c + 2;
            c = c % 100007;
         }
    else
    {
        n = n-1;
        c = abc(n, c);
        n = n-1;
        c = abc(n, c); 
    }
      return c;
}
