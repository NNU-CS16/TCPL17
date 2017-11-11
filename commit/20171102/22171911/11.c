#include <stdio.h>
#include <string.h>
void reverse(char* str)
{
    int i = 0, len;
    len = strlen(str);
    for (i = len -1; i >= 0; i--)
    {
	printf ("%c", str[i]);
    }
} 
int main( )
{
    char str[50];
    printf ("请输入一个字符串：");
    scanf ("%s",str);
    reverse(str);
    return 0;
}



    
	
     
