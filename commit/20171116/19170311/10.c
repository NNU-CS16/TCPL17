#include <stdio.h>
#define SIZE 80
int my_strlen(const char* str);
int main (void)
{
    char str[SIZE];
    fgets(str,SIZE,stdin);
    printf("%d",my_strlen(str));

    
    return 0;


}

int my_strlen(const char* str)
{
    int count = 0;
    while(*str)
    {
        *str++;
        count++;
        
    }

    return count;
}


