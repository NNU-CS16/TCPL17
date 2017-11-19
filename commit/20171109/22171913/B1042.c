#include <stdio.h>
#include <ctype.h>  
int main()
{
    int i, count[26] = {0}, max = 25;
    char c;
    scanf("%c", &c);
    while((c = getchar()) != '\n')  //字符c遇到换行停止
    {
	if (isalpha(c))   //判断c为字母的条件
	    count[tolower(c) - 'a']++;  //将字符c转化为小写，统计输入字符中各个                                           英文字母出现次数
    }
    for (i = 25; i >= 0; i--)
    {
	 if (count[i] >= count[max])
	     max = i;
    }
    printf("%c %d\n", max + 'a', count[max]);
    return 0;
}
