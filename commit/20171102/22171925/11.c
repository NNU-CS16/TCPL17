#include <stdio.h>
#include <string.h>
void reverse(char* str);
int main()
{ 
    char str[10] = {0};
    scanf("%s",str);
    char* s = str;
    reverse(s);
    return 0;
}

void reverse(char* str)
{
    int i, j;
    int len = strlen(str);
    for(i = len-1;i >= 0;i--)
    {
        printf("%c",str[i]);
    }
    printf("\n");
}
