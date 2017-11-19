#include <stdio.h>
int main()
{
int a, b, c, d, e, s, max, i;
printf("请输入A B D:\n");
scanf("%d%d%d", &a, &b, &d);
c = a + b;
i = 1;
max = 1;
s = 0;

while(max < c)
     max = max * d,
     i = i * 10;

while(max != 0)
     {
      e = c / max;
      c = c % max;
      s = s + e * i;
      i = i / 10;
      max = max / d;
     }
printf("A加B的D进制数为：%d\n", s);
return 0;
}
