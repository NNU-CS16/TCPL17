#include <stdio.h>
#include <ctype.h>

int main()
{
    char chr, arr[127] = {0};
    int n = 0, l = 0;
    while ((chr = getchar()) != '\n') // 遍历输入的字符串
        if (isalpha(chr)) // 检验 
            arr[tolower(chr)]++; // 累计小写字母次数

    for (int i = 97; i < 122; i++) // 遍历记录表，选择次数最多的字母
        if (n < arr[i])
            n = arr[(l = i)];
    printf("%c %d\n", l, n); // 输出字母及对应次数
    return 0;
}
