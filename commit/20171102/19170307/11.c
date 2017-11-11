#include <stdio.h>
#include <string.h>

void reverse(char *str);

int main()
{
   char c[100];
   char *str = NULL;
   scanf("%s,",c);
   str = c;
   reverse(str);
   return 0;
}

void reverse(char *str)
{
    int i;
    int len = strlen(str);
    for (i = len - 1; i >= 0; i--)
         printf("%c", str[i]);
    printf("\n");
}

