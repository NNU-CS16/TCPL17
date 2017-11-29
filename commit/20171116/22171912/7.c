/*7.c_高精度加法*/
#include <stdio.h>
#include <string.h>

int main()
{
    char a[1000], b[1000];//定义字符串数组
    int c[10000];
	printf("请输入两个整数：\n"); 
    scanf("%s%s", a, b);//输入字符串数组
    int i, j, k = 0, r = 0;
    int len_a, len_b;
    len_a = strlen(a);
    len_b = strlen(b);
	for (i = len_a - 1, j = len_b - 1; i >= 0 && j >= 0; i--, j--)
	{ 
        int p = (a[i] - '0') + (b[j] - '0') + r;
		r = p / 10;//进位
		c[k++] = p % 10;//余数加到数组中
	}
	while (i >= 0)   //如果b中的数加完了
	{
		int p = (a[i] - '0') + r;
		r = p / 10;
		c[k++] = p % 10;
		i--;
	}
	while (j >= 0)	//如果a中的数加完了
	{
		int p = (b[j] - '0') + r;
		r = p / 10;
		c[k++] = p % 10;
		j--;
	}
	if (r)//判断最高位有没有进位
		c[k++] = r;  
	for (int i = k - 1; i >= 0; i--)//输出结果 
		printf("%d", c[i]);
	printf("\n");
	return 0;
 } 
