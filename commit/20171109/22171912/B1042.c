/*B1042.c_字符统计*/
#include <stdio.h>

int main()
{
    char str[1001] = {0};
    int count[26] = {0};
    int i, k, max, MAX;
    gets(str);
    for(i = 0, k = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 'a' - 'A';  //大写转小写
            k = (int)str[i] - 'a';
            count[k]++;
        }
        else if(str[i] >= 'a' && str[i] <= 'z')
        {
            k = (int)str[i] - 'a';			//对应1字母
            count[k]++;						//某一字母出现次数
        }
    }
    for(k = 0, max = 0, MAX = 0; k < 26; k++)
    {
        if(count[k] > max)
        {
            max = count[k];
            MAX = k;
        }
    }
    printf("%c %d\n",'a' + MAX, max);

    return 0;
}
