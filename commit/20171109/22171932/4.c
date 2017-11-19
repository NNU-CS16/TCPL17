#include <stdio.h>
int abc(int n, int c, int k);
int main()
{
   int n, c, k;
   c = 0;
   printf("请输入正整数N,K:\n");
   scanf("%d%d", &n, &k);
   c = abc(n, c, k);
   if(c == 0)
     c++;
   printf("走法数目为：%d\n",c);
   return 0;
}
int abc(int n, int c, int k) 
{
    int i;
    if(n == 1)
    {
      c++;
      c = c % 100007;
    }
    else if(n < k)
         {
            c = abc(n, c, k-1);
            c = c % 100007;
         }
    else
    {
        for(i = 1; i <= k; i++)
        n = n-1,
        c = abc(n, c, k);
    }
      return c;
}

