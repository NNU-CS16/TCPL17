#include <stdio.h>
long a = 0;
void Hanoi(int n)
{
    if(n == 1)
      a = a + 1;

    else
    {
        Hanoi(n-1);
        a = a + 1;
        Hanoi(n-1);
    }
}

int main()
{
    int n;
    printf("请输入n:\n");
    scanf("%d", &n);
    Hanoi(n);
    printf("输出所需要的最少步数为：%ld\n", a*2);
    return 0;
}
~
~
~
~

