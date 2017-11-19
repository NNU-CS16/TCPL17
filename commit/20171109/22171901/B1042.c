#include <stdio.h>

int main()
{
    char str[1001] = {0};
    int num[30] = {0};
    scanf ("%s" , str); 
    int i ;
    int count = 0;
    for(i = 0; str[i] != 0; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32; //大写字母变化为小写字母
            count = (int)str[i] - 97;
            num[count]++;
        }
        else if(str[i] >= 'a' && str[i] <= 'z')
        {
            count = (int)str[i] - 97;
            num[count]++;
        }
    }

    int max = 0, max_i = 0;
    for(i = 0; i < 30; i++)
    {
        if(num[i] > max)
        {
            max = num[i];
            max_i = i;
        }
    }
    printf("%c %d\n",'a' + max_i, max);

    return 0;
}




