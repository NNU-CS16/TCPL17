/*11.c反转字符串*/
#include <stdio.h>
#include <string.h>

void reverse(char* str[])
{
	int i = 0, len;
    scanf("%s",str);
	len = strlen(str);
	i = len - 1;
	for( ;i >= 0; i--)
		printf("%c",str[i]);
}

int main()
{
	char str[1000];
	int i, len;
	printf("请输入一个字符串：\n");
	reverse(str);
	printf("\n");
	return 0;
}/*这个程序可能是错的，在我的电脑上运行会出现乱码，
但我不知道怎么改了……和室友对完答案发现我们在思路写法上并没有要紧的出入，
但是她的是运行正常的……*/
