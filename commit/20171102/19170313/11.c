#include <stdio.h>
#include <string.h>
void reverse(char* str);
int main()
{
    char w [ 32 ] ;
    scanf("%s", w);
    reverse(w);
    return 0;
}
void reverse(char* str)
{
    int i, a = 0, b;
    char m [ 32 ] ;
    i = strlen(str);
    i--;
    b = i;
    for (a = 0;a <= b;a++)
    {
        m [ a ] = str [ i ] ; 
        i--;
        printf("%c", m [ a ] );
    }
    printf("\n");
    return;
}
