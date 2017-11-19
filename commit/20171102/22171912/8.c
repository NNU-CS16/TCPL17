#include <stdio.h>

int LCM(int m, int n)
{
    int i, pro;
    if (m < n)
    {
        m = m ^ n;
        n = n ^ m;
        m = m ^ n;
    }
    i = m % n;
	pro = m * n;
    while (i != 0)
    {
        m = n;
        n = i;
        i = m % n;
    }
	pro = pro / n;
	return pro;
}

int main()
{
	int i, m, n, pro;
	printf("请输入m n：\n");
	scanf("%d%d", &m, &n);
	pro = LCM(m, n);
	printf("最小公倍数：%d\n", pro);
	return 0;
}
