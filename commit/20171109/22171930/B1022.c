#include <stdio.h>
int main()
{
    int d,c,a,b;
    scanf("%d%d%d", &a, &b, &d);
    c = a + b;
    int ans[31],num = 0;
    while (c != 0)
   {
       ans[num++] = c % d;
       c /= d;
   }
    for (int i = num - 1; i >= 0; i--)
   { 
       printf("%d", ans[i]);
   }
   return 0;
}
    
    
