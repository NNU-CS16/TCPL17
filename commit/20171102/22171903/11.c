#include <stdio.h>
#include <string.h>

void reverse(char* str);
int main()
{
    char* str;
    char a[50];
    scanf("%s", a);
    str = a;
    reverse(str);
     
    return 0;
}

void reverse(char* str)
{
    int i, j;
    i = strlen(str);
    for (j = (i-1); j >= 0; j--)
        printf("%c", str[j]);
    printf("\n");
    return;   
}
