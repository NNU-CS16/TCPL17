#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100000];
    int a = 0, b = 0, n = 0;

    printf("Please input something :\n");
    fgets(str, 99999, stdin);
    for (int i = 0; i < strlen(str); i++)
      if (str[i] >= 'a' && str[i] <= 'z')
         n = n + (int)str[i] - 96;
      else if (str[i] >= 'A' && str[i] <= 'Z')
         n = n + (int)str[i] - 64;
    while (n / 2 != 0)
    {
       if (n % 2 == 0)
           a++;
       if (n % 2 == 1)
           b++;
       n = n / 2;
    }
    if (n % 2 == 1)
       b++;
    printf("%d %d\n", a, b);

    return 0;
}
