#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void reverse(char* str)
{
    int n,i,j;
    char s[100];
    strcpy( s, str );
    n = strlen(str);
    for(i = 0,j=n-1; i<n; i++, j--)
    str[j] = s[i];
}

int main()
{
char str[10000];
scanf("%s",str);
    reverse(str);
    printf("%s\n",str);
    return 0;
}
