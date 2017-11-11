#include <stdio.h>
#include <string.h>
#define MAX 50
void reverse(char* str);

int main()
{
    char str[MAX];
    printf("Please input str:");
    scanf("%s",str);
    reverse(str);
    return 0;
}

void reverse(char* str)
{
    char i;
    for(i=strlen(str)-1; i>=0; i--)
    {
        printf("%c",str[i]);
    }
    printf("\n");
}
