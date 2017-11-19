#include <stdio.h>
int main()
{
    char str[1001] = {0};
    int num[27] = {0};
    int i;
    int max = 0,k = 0,mi = 0;
    gets(str);
    for (i = 0;str[i] != '\0';++i)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
            k = (int)str[i] - 97;
            num[k]++;
        } 
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            k = (int)str[i] - 97;
            num[k]++;
        }
    }
    for (i = 0;i < 27;++i)
    {
        if (num[i] > max)
        {
            max = num[i];
            mi = i;
        }
    }
    printf("%c %d",'a' + mi,max);
    return 0;
}
