#include <stdio.h>
#include <string.h>
void reverse (char* str);

int main()
{
    char str[100];
    scanf ("%s",str);
    reverse (str);
    return 0;
}

void reverse (char* str)
{
    int i;
    i = strlen (str)- 1;
    for (; i >= 0 ; )
     printf ("%c\n",str[i--]);
          
} 
    
