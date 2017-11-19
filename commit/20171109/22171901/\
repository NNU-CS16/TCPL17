#include <stdio.h>

int main()
{
    char str[100001] = {0};
    int i , count = 0;
    int count_0 = 0 , count_1 = 0;
    scanf ("%s" , str);

    for (i = 0; i<=9999 ; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            count = count + str[i] - 'a' + 1;
        if (str[i] >= 'A' && str[i] <= 'Z')
            count = count + str[i] - 'A' + 1;
    }


    while(count)
    {
        if (count % 2 == 0)
            count_0++;
        else
            count_1++;
        count = count / 2;
    }

    printf ("%d %d\n" , count_0 , count_1);
    return 0;


}

